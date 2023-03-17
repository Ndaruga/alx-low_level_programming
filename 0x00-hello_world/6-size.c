#include <stdio.h>

/**
 * main - Entry point
 * Get the size of various data types for both 32 and 64 based architectures
 * Return: Always 0 (Success)
 */
int main(void)
{
	char type_char;
	int type_int;
	long int type_long_int;
	long long int type_long_long_int;
	float type_float;

	printf("Size of a char: %d byte(s)\n", sizeof(type_char));
	printf("Size of a int: %d byte(s)\n", sizeof(type_int));
	printf("Size of a long int: %d byte(s)\n", sizeof(type_long_int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(type_long_long_int));
	printf("Size of a float: %d byte(s)\n", sizeof(type_float));

	return (0);
}
