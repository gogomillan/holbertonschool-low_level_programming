#include "holberton.h"

int _pow(int a, int x);

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: the string with the binary representation
 *
 * Return: The value
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int ret = 0, len = 0, exp = 0;

	if (b == NULL)
		return (0);

	while (*(b + len) != '\0')
	{
		if (*(b + len) < '0' || *(b + len) > '1')
			return (0);
		len++;
	}
	while (len > 0)
	{
		len--;
		ret =  ret + (_pow(2, exp) *  (*(b + len) - 48));
		exp++;
	}
	return (ret);
}

/**
 * _pow -  Pows a numbe to the x potence
 * @a: the base
 * @x: the exponent
 * Return: The value
 */
int _pow(int a, int x)
{
int i, r = a;

	if (x == 0)
		return (1);

	for (i = 1; i < x; i++)
		r = r * a;

	return (r);
}
