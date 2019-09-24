#include <stdlib.h>
#include "holberton.h"

/**
 * print_last_digit - This function prints the last digit of argument
 * @n: The value to evaluate
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int r;

	r = abs(n % 10);
	_putchar('0' + r);
	return (r);
}
