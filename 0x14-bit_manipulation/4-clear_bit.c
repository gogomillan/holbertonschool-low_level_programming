#include "holberton.h"

/**
 * clear_bit - Puts the value of a specific bit (0)
 * @n: the pointer to the unsigned long int value
 * @index: the unsigned int position
 *
 * Return: 1 if works, -1 in other case
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int masc = 1;

	if (index > 63)
		return (-1);

	masc = (masc << index);
	*n = ~*n;
	*n = (*n | masc);
	*n = ~*n;

	return (1);
}
