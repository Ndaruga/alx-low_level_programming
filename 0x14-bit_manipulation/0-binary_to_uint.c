#include "main.h"
#include "stdlib.h"


unsigned int binary_to_uint(const char *b)
{
    int len = 0, i;

    if (b == NULL)
        return (0);
    /* find string length*/
    while (*b++)
        if ((b != 0) || (b != 1))
            return (0);
        len++;
    len++;
    
    for (i = 0; i < len; i++, *b++)
        if (b = 1)                                                                                                                                                                                                                                                                                                                 
}