#include "holberton.h"

/**
 * _print_rev_recursion - prints a string followed by a new line.
 * @s: The string
 *
 * Return: None.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion((s + 1));
		_putchar(*s);
		return;
	}
}
