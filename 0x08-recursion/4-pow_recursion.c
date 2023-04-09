#include "main.h"

/**
 * _pow_recursion - print x to the power of y
 * @x: base integer
 * @y: power integer
 * Return: x**y
*/

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	if (y == 0)
		return (1);
	return (-1);

}
