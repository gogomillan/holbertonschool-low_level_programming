#include "holberton.h"

/**
 * _strcpy - copy a string into another
 * @dest: The destination array
 * @src: The source array
 *
 * Return: none
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
