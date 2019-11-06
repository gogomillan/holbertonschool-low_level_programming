#include "holberton.h"

/**
 * print_binary -  Prints a binary number from an unsigned int
 * @n: the unsigned int value
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
unsigned long int masc = 1;

	if (n <= 1)
	{
		_putchar((n & masc) + 48);
		return;
	}

	print_binary(n >> 1);
	_putchar((n & masc) + 48);
}
