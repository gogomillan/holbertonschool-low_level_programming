#include "holberton.h"

/**
 * cap_string - Change to Capitalize
 * @s: The array
 *
 * Return: none
 */
char *cap_string(char *s)
{
	int i, j, c = 1;
	char t[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
				 '(', ')', '{', '}', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == 1)
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		j = 0;
		c = 0;
		while (t[j] != '\0')
		{
			if (s[i] == t[j])
				c = 1;
			j++;
		}
	}

	return (s);
}
