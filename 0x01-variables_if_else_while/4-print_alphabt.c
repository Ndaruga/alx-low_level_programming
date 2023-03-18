#include <stdio.h>


/**
 *main - Entry point
 *Get lower case letters but skipp e & q
 *Return: Always 0
 *
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
