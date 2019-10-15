#include "holberton.h"

/**
 * _strdup - create a new same string from other
 * @str: the original string
 *
 * Return: The new space of memory to the new string.
 */
char *_strdup(char *str)
{
unsigned int j = 0, size;
char *s;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;
	size = j + 1;
	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		s[j] = str[j];
	return (s);
}
