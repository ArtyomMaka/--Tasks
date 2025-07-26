#include <stdio.h>
#include "my_functions.h"

int main(void) {
	int some_one = 0, some_two = 2;
	int array[11] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 1, 44};
	int *p_one = &some_one, *p_two = &some_two;
	int max_array = array[0], str_l;
	char s[8] = "sahaha1";

	printf("Enter: ");
	fflush(stdout);
	scanf(" %d %d", &some_one, &some_two);

	swap(p_one, p_two);
	max_array = find_max(array, 11);
	arr_output(array, 11);
	double_array(array, 11);
	str_l = my_strlen(s);


	printf("Output: %d and %d\n", some_one, some_two);
	printf("Max array output: %d\n", max_array);
	arr_output(array, 11);
	printf("Strlen: %d\n", str_l);
	printf("Str: %s\n", s);
	swap_ends(s);
	printf("Str after: %s\n", s);
	return 0;
}
