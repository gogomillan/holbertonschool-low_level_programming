#include "holberton.h"

/**
 * print_times_table - This function print the n times table
 * @n: The n times table value
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (((i * j) / 10) != 0)
				if (((i * j) / 10) < 10)
				{
					_putchar(' ');
					_putchar(48 + (i * j) / 10);
				}
				else
				{
					_putchar(48 + (i * j) / 100);
					_putchar(48 + ((i * j) / 10) % 10);
				}
			else if ((i * j) % 10 != 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (i == 0 && j > 0)
			{
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(48 + (i * j) % 10);
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
