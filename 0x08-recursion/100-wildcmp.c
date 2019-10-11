#include "holberton.h"

/**
 * wildcmp - Compares two string to find out if they are identical
 * @s: The string
 *
 * Return: 1 if true or 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));
	else if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, ++s2));
	else if (*s2 == '*' && *s1 != *(s2 + 1))
		return (wildcmp(++s1, s2));
	else if (*s2 == '*' && *s1 == *(s2 + 1))
		return (wildcmp(s1, ++s2));

	return (0);
}
