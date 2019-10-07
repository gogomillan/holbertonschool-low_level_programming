#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the buffer source
 * @accept: the char to find
 *
 * Return: The quantity of bytes contents
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;

	for (; *s != '\0'; s++)
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s == *(accept + i))
				return (s);

	return (NULL);
}
