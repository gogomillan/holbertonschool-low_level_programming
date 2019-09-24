#include "holberton.h"

/**
 * print_alphabet - This is the controller
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i <= 25; i++)
		_putchar(97 + i);
	_putchar('\n');
}
