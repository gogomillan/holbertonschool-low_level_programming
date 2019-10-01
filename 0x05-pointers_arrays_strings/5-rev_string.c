#include "holberton.h"

/**
 * rev_string - create the string str to stdout in reverse
 * @s: The string to print
 *
 * Return: none
 */
void rev_string(char *s)
{
	char c;
	int q = 0, i, j = 0;

	while (*(s + q) != '\0')
		q++;

	for (i = (q - 1); i >= (q / 2); i--)
	{
		c = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = c;
		j++;
	}
}
