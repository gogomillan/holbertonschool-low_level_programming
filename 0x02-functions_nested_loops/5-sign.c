#include "holberton.h"

/**
 * print_sign - This function checks for the sign of an integer value and print
 * @n: The value to evaluate
 *
 * Return: 1 if n is greater than zero, 0 is zero and -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
