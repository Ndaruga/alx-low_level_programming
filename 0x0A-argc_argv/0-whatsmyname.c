#include "stdio.h"
# include "main.h"

/**
 * main - main function to print function name
 * @argc: number of arguments in the function main
 * @argv: holds an array of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
