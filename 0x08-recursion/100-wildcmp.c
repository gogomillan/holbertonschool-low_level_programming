#include "holberton.h"

char *_strchr(char *s, char c);
char *_strstr(char *haystack, char *needle);

/**
 * wildcmp - Compares two string to find out if they are identical
 * @s1: The string 1
 * @s2: The string 2
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
	else if (*s2 == '*' && *(s2 + 1) == '\0')
		if (*s1 != '\0')
			return (wildcmp(++s1, s2));
		else
			return (wildcmp(s1, ++s2));
	else if (*s2 == '*' && *(s2 + 1) != '*')
	{
		if (_strstr(s1, (s2 + 1)) != 0)
			return (wildcmp(_strstr(s1, s2 + 1), s2 + 1));
		else if (_strchr(s1, *(s2 + 1)) != 0)
			return (wildcmp(_strchr(s1, *(s2 + 1)), s2 + 1));
		s2++;
		return (wildcmp(s1, s2));
	}

	return (0);
}

/**
 * _strchr - locates a character in a string.
 * @s: the buffer source
 * @c: the char to find
 *
 * Return: The pointer to first occurency or 0.
 */
char *_strchr(char *s, char c)
{
int i = 0, j;

	while (*(s + i) != '\0')
		i++;
	for (j = 0; j <= i; j++, s++)
		if (*s == c)
			return (s);

	return (0);
}

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
		n = needle;
		for (j = 0; j <= i && *h == *n && *h != '\0' && *n != '\0'; j++)
		{
			h++;
			n++;
		}
		if ((j - i) == 0)
			return (haystack);
		haystack++;
	}

	return (0);
}
