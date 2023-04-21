#include "stdio.h"

/**
 * main - prints name of file from where it
 * was compiled from
 *
 * Return: None
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
