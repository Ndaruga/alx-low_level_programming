#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @int: parameter to be passed in function
 * Return: absolute No
 */

int _abs(int no)
{
	if (no < 0)
	{
		no = no * -1;
		return (no);
	}
	else
	{
		return (no);
	}
}
