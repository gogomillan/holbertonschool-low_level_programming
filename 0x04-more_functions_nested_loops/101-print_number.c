#include "holberton.h"

/**
 * print_number - Prints a number
 * @n: The number to print
 *
 * Return: none
 */
void print_number(int n)
{
	if ((n / 10) == 0)
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		_putchar('0' + n);
		return;
	}

	print_number(n / 10);
	if (n < 0)
		n *= -1;
	_putchar('0' + (n % 10));
}
