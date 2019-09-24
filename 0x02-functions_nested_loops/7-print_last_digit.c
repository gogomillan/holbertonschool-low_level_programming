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
	_putchar('0' + (abs(n) % 10));
	return (abs(n) % 10);
}
