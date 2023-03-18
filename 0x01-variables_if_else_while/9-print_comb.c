#include <stdio.h>


/**
 *main - Entry point
 *Get lower and upper case alphabets using putchar
 *Return: Always 0
 *
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(48 + n);
		if (n == 9)
		{
			break;
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
