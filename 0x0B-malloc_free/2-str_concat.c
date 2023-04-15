#include "main.h"
#include "stdlib.h"

/**
 * str_concat - concatenate two strings
 * @s1: string to be concatenated to
 * @s2: string to concatenate with
 * Return: Return ptr to newly allocaated space
*/

char *str_concat(char *s1, char *s2)
{
    char *concatd_str;
    int len_s1 = 0;
    int len_s2 = 0;
    int i = 0;

    char *temp = s1; /*---- set a duplicate value of s1 to temp*/

    if (s1 == NULL)
        return ("");
    if (s2 == NULL)
        return ("");
    
    /*-----Get the length of s1-----*/
    while (*s1++)
    {
        len_s1++;
    }

    s1 = temp;

    
    /**-------Get length of s2--------*/
    temp = s2;

    while (*s2++)
    {
        len_s2++;
    }
    len_s2++;

    s2 = temp;

    concatd_str = malloc(sizeof(char) * (len_s1 + len_s2));
    if (concatd_str == NULL)
        return (NULL);

    /*------Add s1 to concatd_str-------*/
    for (i = 0; i < len_s1; i++, *s1++)
    {
        concatd_str[i] = *s1;
    }

    return (concatd_str);

    for (i = 0; i < len_s2; i++, *s2++)
    {
        concatd_str[i] = *s2;
    }
    
    return (concatd_str);
    
}