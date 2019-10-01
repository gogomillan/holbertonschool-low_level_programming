#include "holberton.h"

/**
 * _puts - writes the string str to stdout
 * @str: The string to print
 *
 * Return: none
 */
void _puts(char *str)
{
	int q;

	while (*(str + q) != '\0')
	{
		_putchar(*(str + q));
		q++;
	}
	_putchar('\n');
}
