#include "holberton.h"

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: Quantity of bytes
 *
 * Return: 98 if error.
 */
void *malloc_checked(unsigned int b)
{
void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
