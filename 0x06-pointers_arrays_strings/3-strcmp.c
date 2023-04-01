#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Characters to count
 * Return: count integer
 */

int _strlen(char *s)
{
	int count = 0;
	char i;

	for (i = *s; i != '\0'; i = *++s)
	{
		count++;
	}
	return (count);
}

/**
 * 
 * 
*/

int _strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s2[i] != '\0'; i++)
    {
        if (s1[i] > s2[i])
            i++;
        else if (s1[i] < s2[i])
            i--;
        else
            i = 0;
    }
    return (i);

}