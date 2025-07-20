#include <stdio.h>
#include "my_char_functions.h"

void char_info(char c) {
	printf("Символ: %c | Код символа: %3d | Размер: %d байт\n", c, c, sizeof c);
}

int char_id_sum(char first, char second, char third) {
	return (int) first + (int) second + (int) third;
}

int max_char_id(char first, char second, char third) {
	int max = (int) first;
	if ((int) second > max) {
		max = (int) second;
	}
	if ((int) third > max) {
		max = (int) third;
	}
	return max;
}
int min_char_id(char first, char second, char third) {
	int min = (int) first;
	if ((int) second < min) {
		min = (int) second;
	}
	if ((int) third < min) {
		min = (int) third;
	}
	return min;
}
int median_char_id(char first, char second, char third) {
	int max_id = max_char_id(first, second, third);
	int min_id = min_char_id(first, second, third);
	int median;
	if (max_id != (int) first && min_id != (int) first) {
		median = (int) first;
	}
	if (max_id != (int) second && min_id != (int) second) {
		median = (int) second;
	} else {
		median = (int) third;
	}
	return median;
}
double average_char_id(char first, char second, char third) {
	return ((int) first + (int) second + (int) third) / 3.;
}
