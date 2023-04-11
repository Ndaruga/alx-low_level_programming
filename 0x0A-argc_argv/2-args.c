#include "stdio.h"
# include "main.h"

/**
 * main - print all recieved arguments in theit orfder
 * @argc: number of arguments in the function main
 * @argv: holds an array of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		if (argv[i] == NULL)
			continue;
		printf("%s\n", argv[i]);
	}

	return (0);
}
