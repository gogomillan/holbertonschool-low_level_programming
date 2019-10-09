#include "holberton.h"

/**
 * _print_recursion - prints a string.
 * @s: The string
 *
 * Return: None.
 */
void _print_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
