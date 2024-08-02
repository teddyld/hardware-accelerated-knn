#include "knn.hpp"
#include <gmp.h>
#define __gmp_const const

#include <iostream>
#include "ap_axi_sdata.h"
#include "hls_stream.h"

#define TEST_SIZE 10  // There are 10000 training samples


// Two modes, test sample is one sample, U indicates if it is test or train, train is 0.
// First run will load all training data in, second run loads all testing data.
// Output data is 1 if prediction matches label.
void knn(sample_t & input, sample_t train_samples[TRAIN_SIZE], ap_uint<1>& output);

int main()
{
	FILE *fp = fopen("./train.bin", "rb");
	if (fp == NULL)
	{
		perror("fopen failed");
		return -1;
	}

	sample_t *train_samples = (sample_t *)malloc(TRAIN_SIZE * sizeof(sample_t));

	for (int i = 0; i < TRAIN_SIZE; i++)
	{
		char temp_label;
		fread(&(temp_label), sizeof(temp_label), 1, fp);
		label_t label = temp_label;
		unsigned char buffer[SAMPLE_SIZE];
		fread(buffer, sizeof(buffer), 1, fp);
		ap_uint<400> data = 0;
		for (int j = 20; j < 70; j++) {

			data.range((j-20) * CHAR_SIZE, (j + 1 - 20) * CHAR_SIZE - 1) = buffer[j];
		}
		sample_t sample = (data, label);
		train_samples[i] = sample;

	}
	fclose(fp);

    fp = fopen("./test.bin", "rb");
    if (fp == NULL)
    {
        perror("fopen failed");
        return -1;
    }

    int hits = 0;
    for (int i = 0; i < TEST_SIZE; i++)
    {
    	char temp_label;
		fread(&(temp_label), sizeof(temp_label), 1, fp);
		label_t label = temp_label;
		unsigned char buffer[SAMPLE_SIZE];
		fread(buffer, sizeof(buffer), 1, fp);
		ap_uint<400> data = 0;
		for (int j = 20; j < 70; j++) {

			data.range((j-20) * CHAR_SIZE, (j + 1 - 20) * CHAR_SIZE - 1) = buffer[j];
		}
		sample_t sample = (data, label);
		ap_uint<1> output;

        knn(sample, train_samples, output);
        if (output == 1)
        	hits++;
        //printf("%f\n", (1.0) * hits / (i + 1));
    }
    fclose(fp);

    printf("Accuracy of %f using k = %d\n", (1.0) * hits / TEST_SIZE, K);

    return 0;
}
