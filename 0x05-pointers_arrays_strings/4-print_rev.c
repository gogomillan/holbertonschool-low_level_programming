#include "holberton.h"

/**
 * print_rev - writes the string str to stdout in reverse
 * @s: The string to print
 *
 * Return: none
 */
void print_rev(char *s)
{
	int q = 0, i;

	while (*(s + q) != '\0')
		q++;

	for (i = (q - 1); i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
