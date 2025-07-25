#include "task_2.h"
#include <stdio.h>

int main(void) {
	unsigned int key, key_steps;
	unsigned char key_symbol, enc;

	printf("Введите ключ (1-255): ");
	fflush(stdout);
	if (scanf(" %u", &key) != 1 || key < 1 || key > 255) {
		fprintf(stderr, "Ошибка: недопустимое значение ключа!\n");
		return 1;
	}
	printf("Введите количество повторов (1-10): ");
	fflush(stdout);
	if (scanf(" %u", &key_steps) != 1 || key_steps < 1 || key_steps > 10) {
		fprintf(stderr, "Ошибка: недопустимое значение повторов!\n");
		return 1;
	}
	printf("Введите символ: ");
	fflush(stdout);
	if (scanf(" %c", &key_symbol) != 1) {
		fprintf(stderr, "Ошибка: недопустимое значение символа!\n");
		return 1;
	}

	enc = encryption(key, key_steps, key_symbol);

	printf("Итоговый символ: %c\n", enc);
	printf("Код символа: %d\n", (unsigned char) enc);
	printf("Размеры: %zu\n", sizeof enc);
	printf("char: %zu\n", sizeof(char));
	printf("int: %zu\n", sizeof(int));
	printf("double: %zu\n", sizeof(double));
	printf("Округленный результат деления кода: %d\n",
			(int) (key_symbol / 3.0));

	return 0;
}
