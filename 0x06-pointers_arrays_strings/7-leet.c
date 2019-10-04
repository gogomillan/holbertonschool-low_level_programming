#include "holberton.h"

/**
 * leet - Cypher chars
 * @s: The array
 *
 * Return: none
 */
char *leet(char *s)
{
	int i = 0, j;
	char l[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char u[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char n[] = {'4', '3', '0', '7', '1', '\0'};

	while (s[i] != '\0')
	{
		for (j = 0; l[j] != '\0'; j++)
			if (s[i] == l[j] || s[i] == u[j])
				s[i] = n[j];
		i++;
	}

	return (s);
}
