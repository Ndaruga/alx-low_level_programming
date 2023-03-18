#include <stdio.h>


/**
 *main - Entry point
 *print base 10 numeric numbers
 *Return: Always 0
 *
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	putchar('\n');

	return (0);
}

