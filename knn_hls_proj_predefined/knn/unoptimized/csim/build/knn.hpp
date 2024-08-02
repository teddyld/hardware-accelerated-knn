#include <ap_int.h>

#define TRAIN_SIZE 6000 // Training data uses 60000 samples
#define NUM_CHARS 10     // Number of labels
#define CHAR_SIZE 8      // Bits in char
#define K 5				 // k in knn
#define MAX_DIST 800	 // Distances will not exceed this value
#define DATA_SIZE 400	 // Number of bits in data
#define LABEL_SIZE 4     // Number of bits in label
#define SAMPLE_SIZE 98   // Number of bytes in data

typedef ap_uint<4> label_t;
typedef ap_uint<400> data_t;
typedef ap_uint<404> sample_t; // 4 LSB is label, MSB is 1 if it is test, else it is train.
