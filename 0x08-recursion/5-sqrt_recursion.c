#include "holberton.h"

int _sqrt (int n, int b);
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - return the natural square root power of a number
 * @n: The number
 *
 * Return: The square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - find a possible sqrt
 * @n: The base
 * @b: The posible power
 *
 * Return: The factorial.
 */
int _sqrt (int n, int b)
{
	if ((n - _pow_recursion(b, 2)) == 0)
		return (b);
	else if ((n - _pow_recursion(b, 2)) < 0)
		return (-1);
	return (_sqrt(n, b + 1));
}

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
