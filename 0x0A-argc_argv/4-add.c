#include "stdio.h"
# include "main.h"
#include "stdlib.h"

/**
 * main - add positive numbers
 * @argc: number of arguments in the function main
 * @argv: holds an array of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
    int sum, i;
    argv=argv;
    
    if (argc <= 1)
    {
        printf("0\n");
    }
    for (i = 1, sum = 0; i <= argc; i++)
    {
        if (*argv[i] >= '0' && *argv[i] <= '9')
        {
            sum += atoi(argv[i]);
            printf("sum %d\n", sum);
        }
        printf("Error\n");
        return (1);
    }
	return (0);
}
