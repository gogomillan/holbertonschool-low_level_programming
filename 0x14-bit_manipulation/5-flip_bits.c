#include "holberton.h"

/**
 * flip_bits - Returns the numer of bits that to flip to move from n to m or vs
 * @n: First value
 * @m: Second value
 *
 * Return: Quantity of bits needed to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int masc = 1;

	n = (n ^ m);
	m = 0;

	while (n != 0)
	{
		if ((n & masc) == 1)
			m++;
		n = n >> 1;
	}

	return (m);
}
