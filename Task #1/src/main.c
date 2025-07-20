/*
 ============================================================================
 Name        : ForStudy.c
 Author      : Makarkin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "my_char_functions.h"

int main(void) {
	char first_char, second_char, third_char;
	int max_id, min_id, median_id, sum_id;
	double average_id = 0;

	printf("Введите 3 символа: ");
	fflush(stdout);
	scanf(" %c %c %c", &first_char, &second_char, &third_char);

	char_info(first_char);
	char_info(second_char);
	char_info(third_char);

	max_id = max_char_id(first_char, second_char, third_char);
	min_id = min_char_id(first_char, second_char, third_char);
	median_id = median_char_id(first_char, second_char, third_char);
	average_id = average_char_id(first_char, second_char, third_char);
	sum_id = char_id_sum(first_char, second_char, third_char);


	printf("Сумма кодов: %d\n", sum_id);
	printf("Разница между макс и мин кодом: %d\n", max_id - min_id);
	printf("Произведение двух младших кодов: %d\n", min_id * median_id);
	printf("Среднее значение (вещественное): %.2f\n", average_id);
	printf("Обратный порядок: %c %c %c\n", third_char, second_char, first_char);
	return 0;
}
