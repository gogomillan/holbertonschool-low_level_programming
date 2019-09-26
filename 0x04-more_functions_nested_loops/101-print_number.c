#include "holberton.h"

/**
 * print_number - Prints a number
 * @n: The number to print
 *
 * Return: none
 */
void print_number(int n)
{
	char h = '-';
	char o = '0';
	int  i = n;

	if ((n / 10) == 0)
	{
		if (n < 0)
		{
			_putchar(h);
			i *= -1;
		}
		_putchar(o + i);
		return;
	}

	print_number(n / 10);
	if (n < 0)
		i *= -1;
	_putchar(o + (i % 10));
}
