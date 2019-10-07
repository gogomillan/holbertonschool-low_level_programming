#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the buffer source
 * @accept: the char to find
 *
 * Return: The quantity of bytes contents
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
unsigned int c = 0;

	for (; *s != '\0' && *s != ' '; s++)
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s == *(accept + i))
				c++;

	return (c);
}
