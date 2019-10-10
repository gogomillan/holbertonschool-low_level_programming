#include "holberton.h"

/**
 * _pow_recursion - return the c power of y
 * @x: The base
 * @y: The power
 *
 * Return: The factorial.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
