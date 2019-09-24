#include "holberton.h"

/**
 * print_last_digit - This function prints the last digit of argument
 * @n: The value to evaluate
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;

	_putchar('0' + (n % 10));
	return (n % 10);
}
