#include "holberton.h"

/**
 * puts_half - prints the second half of string str
 * @str: The string to print
 *
 * Return: none
 */
void puts_half(char *str)
{
	int q = 0, i;

	while (*(str + q) != '\0')
		q++;

	for (i = (q % 2) == 0 ? (q / 2) : (q / 2 + 1); i < q; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
