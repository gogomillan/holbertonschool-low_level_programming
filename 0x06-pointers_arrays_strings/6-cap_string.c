#include "holberton.h"

/**
 * cap_string - Change to Capitalize
 * @s: The array
 *
 * Return: none
 */
char *cap_string(char *s)
{
	int i, j;
	char t[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
				 '(', ')', '{', '}', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (t[j] != '\0')
		{
			if (s[i] == t[j])
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			j++;
		}
	}

	return (s);
}
