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

	while (n > 0)
	{
		printf("%ld", n & masc);
		n = n >> 1;
	}
}
