#include <stdio.h>


/**
 *main - Entry point
 *Print Hexadecimal numbers with base 16
 *Return: Always 0
 *
 */

int main(void)
{
	int num;
	char ch;

	for (num = 0; num <= 9; num++)
		putchar(48 + num);
	for (ch = 'a'; ch <= 'f'; ++ch)
		putchar(ch);
	putchar('\n');

	return (0);
}
