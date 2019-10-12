#include "holberton.h"

/**
 * _memset - fills memory with a constant type
 * @s: the buffer
 * @b: the constant
 * @n: the size
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
