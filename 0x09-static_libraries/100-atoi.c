#include "holberton.h"
#include <math.h>

/**
 * _atoi - convert a string s to an integer
 * @s: The source array
 *
 * Return: The integer value or 0 if s isn't a number
 */
int _atoi(char *s)
{
	int p, k;
	int i, sign = 1, digit = 0, st, en = 0, b = 1;
	int r = 0;

	for (i = 0; s[i] != '\0' && b; i++)
	{
		if (s[i] == '+' && digit != 1)
			sign = sign * 1;
		else if (s[i] == '-' && digit != 1)
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
		for (k = 0, p = 10; k < (en - i); k++)
			p = p * 10;
		r += (s[i] - 48) * p * sign;
	return (r);
}
