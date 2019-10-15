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
unsigned int j;
char *s;

	if (size == 0)
		return (NULL);

	s = (char *) malloc(size * sizeof(c));
	if (s == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		s[j] = c;
	return (s);
}
