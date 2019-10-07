#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: the buffer source
 * @c: the char to find
 *
 * Return: The pointer to first occurency or NULL.
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
		if (*s == c)
			return (s);

	return (NULL);
}
