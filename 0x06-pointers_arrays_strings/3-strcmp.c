#include "holberton.h"

/**
 * _strcmp - Compare a string to another
 * @dest: The destination array
 * @src: The source array
 *
 * Return: none
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		r = s1[i] - s2[i];
		if (r != 0)
			return (r);
		if (s1[i + 1] == '\0' && s2[i + 1] != '\0')
			r = s1[i + 1] - s2[i + 1];
		else if (s1[i + 1] != '\0' && s2[i + 1] == '\0')
			r = s1[i + 1] - s2[i + 1];
		if (r != 0)
			return (r);
		i++;
	}

	return (r);
}
