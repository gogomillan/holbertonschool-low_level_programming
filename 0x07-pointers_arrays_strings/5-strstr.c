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
int i = 0;

	for (; *haystack != '\0'; haystack++)
		if (*haystack == *needle)
		{
			i = 0; 
			while (*(needle + i) != '\0')
				if (*(haystack + i) != *(needle + i))
					break;
				else
					i++;
			if (*(needle + i) == '\0')
				return (haystack);
		}

	return (NULL);
}
