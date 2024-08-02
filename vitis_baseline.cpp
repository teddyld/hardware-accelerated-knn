#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <ctime>
#include <time.h>

#include <cstdint>

#define USER_IP_ADDR_LOW 0xB0200000
#define USER_IP_ADDR_HIGH 0xB03FFFFF

#define TRAIN_SIZE 6000 // Training data uses 6000 samples
#define TEST_SIZE 50    // Number of test samples
#define K 5             // k in knn
#define DATA_SIZE 400   // Number of bits in data
#define LABEL_SIZE 4    // Number of bits in label
#define SAMPLE_SIZE 98  // Number of bytes in data

// find the offset from your Vitis HLS project synthesis summary
#define USER_IP_ADDR_OFFSET_CTRL 0
#define USER_IP_ADDR_OFFSET_INPUT_DATA 0x10
#define USER_IP_ADDR_OFFSET_OUTPUT_DATA 0x100000
#define USER_IP_ADDR_OFFSET_TRAIN_SAMPLES_BASE 0x080000

void initialize_hw(void);
void print_bits(uint64_t value, int how_many_bits);
int get_nth_bit(uint64_t value, int n);
uint8_t reverse_bits(uint8_t num);

int main(void)
{

    initialize_hw();

    // bit hacky, should be properly mapped as userspace i/o instead
    auto fd = open("/dev/mem", O_RDWR | O_SYNC);
    if (fd == -1)
    {
        perror("/dev/mem open");
        return 0;
    }
    uint64_t axiBasePtr = (uint64_t)mmap(NULL, USER_IP_ADDR_HIGH - USER_IP_ADDR_LOW, PROT_READ | PROT_WRITE, MAP_SHARED, fd, USER_IP_ADDR_LOW);
    close(fd); // fd can be closed after mmap is created
    if ((void *)axiBasePtr == MAP_FAILED)
    {
        perror("Error mapping the device to memory.\n");
        exit(EXIT_FAILURE);
    }

    // wait for IP ready
    while (!(*(uint32_t *)(axiBasePtr + USER_IP_ADDR_OFFSET_CTRL) & 0x4))
        ;

    printf("# Training samples = %d - # Testing samples = %d\n", TRAIN_SIZE, TEST_SIZE);

    // Load train sample terms
    FILE *train_fp = fopen("/lib/firmware/xilinx/train.bin", "rb");
    if (train_fp == NULL)
    {
        perror("fopen failed");
        return 0;
    }

    clock_t t;
    t = clock();

    uint8_t *train_input_ptr = (uint8_t *)malloc(TRAIN_SIZE * (((DATA_SIZE + LABEL_SIZE) / 8) + 1));

    for (int i = 0; i < TRAIN_SIZE; i++)
    {
        // Get training input
        char label;
        fread(&(label), sizeof(label), 1, train_fp);
        unsigned char buffer[SAMPLE_SIZE];
        fread(buffer, sizeof(buffer), 1, train_fp);

        train_input_ptr[0 + (i * 51)] = label & 0b00001111;
        for (int j = 20; j < 70; j++)
        {
            train_input_ptr[j - 20 + 1 + (i * 51)] = reverse_bits(buffer[j]);
        }
    }

    for (int j = 0; j < (51 * TRAIN_SIZE); j++)
    {
        *(uint32_t *)(axiBasePtr + USER_IP_ADDR_OFFSET_TRAIN_SAMPLES_BASE + j * 8) = train_input_ptr[j];
    }

    fclose(train_fp);

    t = clock() - t;
    double train_time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("Time to load training samples = %f seconds\n", train_time_taken);

    FILE *test_fp = fopen("/lib/firmware/xilinx/test.bin", "rb");
    if (test_fp == NULL)
    {
        perror("fopen failed");
        return 0;
    }

    t = clock();

    uint8_t *input_ptr = (uint8_t *)malloc(((DATA_SIZE + LABEL_SIZE) / 8) + 1);
    int hits = 0;
    for (int i = 0; i < TEST_SIZE; i++)
    {

        // Get test input
        char label;
        fread(&(label), sizeof(label), 1, test_fp);
        unsigned char buffer[SAMPLE_SIZE];
        fread(buffer, sizeof(buffer), 1, test_fp);

        // stop IP
        *(uint32_t *)(axiBasePtr + USER_IP_ADDR_OFFSET_CTRL) = 0x0;

        input_ptr[0] = label & 0b00001111;
        for (int j = 20; j < 70; j++)
        {
            input_ptr[j - 20 + 1] = reverse_bits(buffer[j]);
        }

        for (int j = 0; j < 51; j++)
        {
            *(uint32_t *)(axiBasePtr + USER_IP_ADDR_OFFSET_INPUT_DATA + j * 8) = input_ptr[j];
        }

        // start IP
        *(uint32_t *)(axiBasePtr + USER_IP_ADDR_OFFSET_CTRL) = 0x1;

        while (!(*(uint32_t *)(axiBasePtr + USER_IP_ADDR_OFFSET_CTRL) & 0b1110))
            ;

        if ((*(uint32_t *)(axiBasePtr + USER_IP_ADDR_OFFSET_OUTPUT_DATA) & 0b1) != 0)
        {
            hits++;
        }
    }

    t = clock() - t;
    double test_time_taken = ((double)t) / CLOCKS_PER_SEC;

    printf("Time to execute test samples = %f seconds\n", test_time_taken);
    printf("Total taken to execute = %f seconds\n", test_time_taken + train_time_taken);
    printf("Accuracy of %f using k = %d\n", ((1.0) * hits) / TEST_SIZE, K);
    fclose(test_fp);
    free(input_ptr);

    return 0;
}

void initialize_hw(void)
{
    if (getuid() != 0)
    {
        printf("reconfiguration flow requires super user!\n");
        return;
    }
    // configure FPGA & device tree
    system("sudo xmutil unloadapp");      // remove existing dt overlay
    system("sudo xmutil loadapp my_app"); // program FPGA and load dt overlay
}

// extract the nth bit from a value
int get_nth_bit(uint64_t value, int n)
{
    // shift the bit right n bits
    // this leaves the n-th bit as the least significant bit
    uint64_t shifted_value = value >> n;

    // zero all bits except the the least significant bit
    int bit = shifted_value & 1;

    return bit;
}

// print the bottom how_many_bits bits of value
void print_bits(uint64_t value, int how_many_bits)
{
    // print bits from most significant to least significant
    printf("\n");
    for (int i = how_many_bits - 1; i >= 0; i--)
    {
        int bit = get_nth_bit(value, i);
        printf("%d", bit);
    }
    printf("\n");
}

uint8_t reverse_bits(uint8_t num)
{
    uint8_t reversed_num = 0;
    int i;
    for (i = 0; i < 8; i++)
    {
        if (num & (1 << i))
            reversed_num |= 1 << (7 - i);
    }
    return reversed_num;
}
