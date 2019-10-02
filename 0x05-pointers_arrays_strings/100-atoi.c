#include "holberton.h"

int _pow(int b, int e);

/**
 * _atoi - convert a string s to an integer
 * @s: The source array
 *
 * Return: The integer value or 0 if s isn't a number
 */
int _atoi(char *s)
{
	int i, sign = 1, digit = 0, st, en = 0, b = 1;
	int r = 0;

	for (i = 0; s[i] != '\0' && b; i++)
	{
		if (s[i] == '+')
			sign = sign * 1;
		else if (s[i] == '-')
			sign = sign * -1;
		else if (s[i] >= '0' && s[i] <= '9' && digit == 0)
		{
			digit = 1;
			st = i;
		}
		else if (digit == 1 && (s[i] < '0' || s[i] > '9'))
		{
			b = 0;
			en = i - 1;
		}
	}
	if (en == 0)
		en = i - 1;
	for (i = st; i <= en; i++)
		r += (s[i] - 48) * _pow(10, (en - i)) * sign;
	return (r);
}

/**
 * _pow - pow b to e potent
 * @b: The base
 * @e: The exponent
 *
 * Return: The integer value or 0 if s isn't a number
 */
int _pow(int b, int e)
{
	int i;

	if (e < 1)
		return (1);

	for (i = 1; i < e; i++)
		b = b * 10;

	return (b);
}
