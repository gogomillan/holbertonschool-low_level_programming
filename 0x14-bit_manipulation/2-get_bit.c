#include "holberton.h"

/**
 * get_bit - Returns the value of a specific bit
 * @n: the unsigned long int value
 * @index: the unsigned int position
 *
 * Return: Nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int masc = 1;

	if (index > 63)
		return (-1);

	n = (n >> index);
	n = (n & masc);

	return (n);
}
