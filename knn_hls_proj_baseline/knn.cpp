#include "knn.hpp"
#include "D:\Xilinx\Vivado\2020.1\include\gmp.h"
#define __gmp_const const
#include <ap_axi_sdata.h>
#include "hls_stream.h"



// Function that calculates distance between two samples
unsigned short int calculate_distance(data_t a, data_t b);

// Counts number of train_samples there are
int train_cnt = 0;

void knn(sample_t & input, sample_t train_samples[TRAIN_SIZE], ap_uint<1>& output)
{
	#pragma HLS INTERFACE s_axilite port=output
	#pragma HLS INTERFACE s_axilite port=input
	#pragma HLS INTERFACE s_axilite port=return
	#pragma HLS INTERFACE s_axilite port=train_samples
	label_t test_label = input.range(3, 0);
	data_t test_data = input.range(403, 4);

	// Array that stores the k closest distances, will be sorted
	unsigned short int distances[K][2];
	for (int i = 0; i < K; i++) {
		distances[i][0] = MAX_DIST;
		distances[i][1] = -1; // Uninitialised
	}

	distance_loop:
	for (int i = 0; i < TRAIN_SIZE; i++)
	{
		unsigned short int curr_dist = calculate_distance(test_data, train_samples[i].range(403, 4));
		label_t curr_label = train_samples[i].range(3, 0);
		for (int j = 0; j < K; j++) {
			// Keep swapping curr distance and label until the end of the array

			if (curr_dist < distances[j][0]) {
				unsigned short int temp1 = curr_dist;
				curr_dist = distances[j][0];
				distances[j][0] = temp1;
				label_t temp2 = curr_label;
				curr_label = distances[j][1];
				distances[j][1] = temp2;
			}
		}
	}

	// Frequency of most frequent character
	int max_freq = 0;
	// Most frequent character
	int most_freq = -1;
	// Array to store frequencies of characters
	int freq[NUM_CHARS];
	freq_init_loop:
	for (int i = 0; i < NUM_CHARS; i++)
		freq[i] = 0;

	// Filter through k nearest neighbours
	neighbours_loop:
	for (int i = 0; i < K; i++)
	{
		int label = distances[i][1];
		freq[label]++;
		if (freq[label] > max_freq)
		{
			max_freq = freq[label];
			most_freq = label;
		}
	}

	if ((int)test_label == most_freq) output = 1;
	else output = 0;
}

// Implementation counts the number of differring bits between the two samples.
unsigned short int calculate_distance(data_t a, data_t b)
{
    unsigned short int distance = 0;
    bitcount_loop:
    for (int i = 0; i < DATA_SIZE; i++) {
    	if (a[i] != b[i]) distance++;
    }
    return distance;
}
