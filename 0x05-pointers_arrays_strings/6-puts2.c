#include "holberton.h"

/**
 * puts2 - prints every other character of str
 * @str: The string to print
 *
 * Return: none
 */
void puts2(char *str)
{
	int q = 0;

	while (*(str + q) != '\0')
	{
		if ((q % 2) == 0)
			_putchar(*(str + q));
		q++;
	}
	_putchar('\n');
}
