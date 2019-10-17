#include "holberton.h"

/**
 * string_nconcat - concatenate two string
 * @s1: the first string
 * @s2: the second string
 * @n: the qty of second string to copy
 *
 * Return: A pointer to the new concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, size;
char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (j > n)
		j = n;
	size = i + j + 1;
	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (j = 0; j < size - 1; j++)
		if (*s1 != '\0')
			s[j] = *(s1++);
		else
			s[j] = *(s2++);
	s[j] = '\0';

	return (s);
}
