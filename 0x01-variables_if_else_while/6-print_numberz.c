#include <stdio.h>

/**
 *main - Entry point
 *Get base 10 numbers using putchar
 *Return: Always 0
 *
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(48+num);
	putchar('\n');
	return (0);
}
