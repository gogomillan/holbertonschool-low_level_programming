#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - poies memry area
 * @dest: the buffer destiny
 * @src: the buffer source
 * @n: the size
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
