#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: the buffer source
 * @c: the char to find
 *
 * Return: The pointer to first occurency or NULL.
 */
char *_strchr(char *s, char c)
{
int i = 0, j;

	while (*(s + i) != '\0')
		i++;
	for (j = 0; j <= i; j++, s++)
		if (*s == c)
			return (s);

	return (0);
}
