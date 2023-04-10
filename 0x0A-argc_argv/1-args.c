#include "stdio.h"
#include "main.h"

/**
 * main - print number of arguments passed
 * @argc: number of arguments in the function main
 * @argv: holds an array of arguments
 * Return: 0
*/

int main(int argc, char **argv __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
