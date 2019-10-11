#include "holberton.h"

/**
 * _strncat - concat a string to another
 * @dest: The destination array
 * @src: The source array
 * @n: The n quantity expected
 *
 * Return: none
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	l = 0;
	while (dest[l] != '\0')
		l++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';

	return (dest);
}
