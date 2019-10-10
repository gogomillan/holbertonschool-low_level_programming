#include "holberton.h"

int _prime(int n, int b);

/**
 * is_prime_number - Identify if the an integer is a prime
 * @n: The number
 *
 * Return: 1 if true or 0 if false
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}

/**
 * _prime - find out if a number is prime
 * @n: The base
 * @b: The divident
 *
 * Return: The factorial.
 */
int _prime(int n, int b)
{
	if (b > (n / 2))
		return (1);
	else if ((n % b) == 0)
		return (0);
	return (_prime(n, b + 1));
}
