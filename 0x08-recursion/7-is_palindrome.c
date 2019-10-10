#include "holberton.h"

int _palindrome(char *s, int l);

/**
 * is_palindrome - Detects is a string is a plaindrome
 * @s: The string
 *
 * Return: 1 if true or 0 if false
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_palindrome(s, strlen(s)));
}

/**
 * _palindrome - Detects is a string is a plaindrome
 * @s: The string
 * @l: The lenght of the string
 *
 * Return: 1 if true or 0 if false
 */
int _palindrome(char *s, int l)
{
	if (*s != *(s + l - 1))
		return (0);
	else if (l <= 1)
		return (1);
	return (_palindrome(++s, l - 2));
}
