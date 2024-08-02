#include "knn.hpp"
#include <gmp.h>
#define __gmp_const const

#include <iostream>
#include "ap_axi_sdata.h"
#include "hls_stream.h"
#include <ctime>
#include <time.h>

#define TEST_SIZE 100  // There are 10000 training samples


// Two modes, test sample is one sample, U indicates if it is test or train, train is 0.
// First run will load all training data in, second run loads all testing data.
// Output data is 1 if prediction matches label.
void knn(unsigned char input[51], ap_uint<1>& output);

int main()
{
	FILE *fp;

    fp = fopen("./test.bin", "rb");
    if (fp == NULL)
    {
        perror("fopen failed");
        return -1;
    }

    printf("# Testing samples = %d\n", TEST_SIZE);
//    clock_t t = clock();

    int hits = 0;
    for (int i = 0; i < TEST_SIZE; i++)
    {
    	char temp_label;
		fread(&(temp_label), sizeof(temp_label), 1, fp);
		label_t label = temp_label;
		unsigned char buffer[SAMPLE_SIZE];
		fread(buffer, sizeof(buffer), 1, fp);
		ap_uint<400> data = 0;
		unsigned char input[51];
		for (int j = 20; j < 70; j++) {
			data.range((j-20) * CHAR_SIZE, (j + 1 - 20) * CHAR_SIZE - 1) = buffer[j];
		}

		for (int i = 1; i < 51; i++) {
			input[i] = data.range(i * 8 - 1, (i-1) * 8);
		}

		input[0] = label;

		ap_uint<1> output;

        knn(input, output);
        if (output == 1)
        	hits++;
        //printf("%f\n", (1.0) * hits / (i + 1));
    }
    fclose(fp);

//    t = clock() - t;
//    double test_time_taken = ((double)t) / CLOCKS_PER_SEC;
//    printf("Time to execute test samples = %f seconds\n", test_time_taken);
    printf("Accuracy of %f using k = %d\n", (1.0) * hits / TEST_SIZE, K);

    return 0;
}
