#include "my_functions.h"

void arr_output(int *arr, int size) {
	int *last_arr = arr;
	printf("Array: ");
	while (last_arr != arr + size) {
		printf("%d ", *last_arr);
		++last_arr;
	}
	/*for(int *p = arr; p < arr+size; ++p) */
	putchar('\n');
}
void swap(int *a, int *b) {
	int temp_var = *a;
	*a = *b;
	*b = temp_var;
}
int find_max(int *arr, int size) {
	int max = *arr;
	for (int *p = arr + 1; p < arr + size; ++p) {
		if (max < *p) {
			max = *p;
		}
	}

//	int *arr_p = arr;
//	for (int i = 0; i < size; ++i) {
//		if (max < *arr_p) {
//			max = *arr_p;
//		}
//		++arr_p;
//	}

	return max;

}
void double_array(int *arr, int size) {
//	int count = 0;
	for (int *p = arr; p < arr + size; ++p) {
		*p *= 2;
	}
//	while (count < size) {
//		*(arr + count) *= 2;
//		++count;
//	}
}
int my_strlen(const char *s) {
	int count = 0;
	const char *ptr = s;
	while (*ptr != '\0') {
		++ptr;
		++count;
	}
	return count;
}
void swap_ends(char *str) {
	int size = my_strlen(str);
	if (size < 2) {
		printf("Error with swap: not enough symbols");
	} else {
		char temp = *(str);
		*(str) = *(str + size - 1);
		*(str + size - 1) = temp;
	}

}
