#include "holberton.h"

/**
 * times_table - This function print the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (((i * j) / 10) != 0)
				_putchar(48 + (i * j) / 10);
			else if ((i * j) % 10 != 0)
				_putchar(' ');
			else if (i == 0 && j > 0)
				_putchar(' ');
			_putchar(48 + (i * j) % 10);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
