#include "holberton.h"

/**
 * print_number - Prints a number
 * @n: The number to print
 *
 * Return: none
 */
void print_number(int n)
{
	int  i = n;

	if ((n / 10) == 0)
	{
		if (n < 0)
		{
			_putchar('-');
			i *= -1;
		}
		_putchar('0' + i);
		return;
	}

	print_number(n / 10);
	if (n < 0)
		i *= -1;
	_putchar('0' + (i % 10));
}
