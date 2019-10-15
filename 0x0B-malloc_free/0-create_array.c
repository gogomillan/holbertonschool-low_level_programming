#include "holberton.h"

/**
 * create_array - create an array of chars
 * @size: the size for the array
 * @c: the character for initialize
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *s = (char *) malloc(size * sizeof(c));

	if (s == NULL)
		return (NULL);

	for (unsigned int j = 0; j < size; j++)
		s[j] = c;
	return (s);
}
