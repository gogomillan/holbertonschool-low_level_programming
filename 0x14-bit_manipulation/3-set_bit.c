#include "holberton.h"

/**
 * set_bit - Puts the value of a specific bit
 * @n: the pointer to the unsigned long int value
 * @index: the unsigned int position
 *
 * Return: 1 if works, -1 in other case
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int masc = 1;

	if (index > 63)
		return (-1);

	masc = (masc << index);
	*n = (*n | masc);

	return (1);
}
