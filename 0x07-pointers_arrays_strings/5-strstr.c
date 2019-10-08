#include "holberton.h"

/**
 * _strstr - locates a substring.
 * @haystack: the buffer source
 * @needle: the string to find
 *
 * Return: The quantity of bytes contents
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j;
char *h = haystack, *n = needle;

	while (needle[i] != '\0')
		i++;

	while (*haystack != '\0')
	{
		h = haystack;
		for (j = 0; j <= i && *h == *n && *h != '\0' && *n != '\0'; j++)
		{
			h++;
			n++;
		}
		if ((j - i) == 0)
			return (haystack);
		haystack++;
	}

	return (NULL);
}
