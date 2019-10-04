#include "holberton.h"

/**
 * rot13 - Cypher chars
 * @s: The array
 *
 * Return: none
 */
char *rot13(char *s)
{
	int i = 0, j;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; l[j] != '\0'; j++)
			if (s[i] == l[j])
			{
				s[i] = u[j];
				break;
			}
		i++;
	}

	return (s);
}
