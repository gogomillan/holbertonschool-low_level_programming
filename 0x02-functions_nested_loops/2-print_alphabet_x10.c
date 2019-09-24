#include "holberton.h"

/**
 * print_alphabet_x10 - This function print 10 lines of alphabet
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 25; j++)
			_putchar(97 + j);
		_putchar('\n');
	}
}
