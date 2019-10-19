#include "holberton.h"
#include <stdlib.h>

void _sum(char **s, int l);
char *_multiplyrev(char *s, char c, int o);
int _isnumber(char *s);
int _lenght(char *s);
void _puts(char *s);

/**
 * main - check the code for Holberton School students.
 * @argc: Qty of parameters
 * @argv: Array of pointers with the parameters
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
char **t, *max, *min;
int  l, i;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}
	if (!_isnumber(argv[1]) || !_isnumber(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}
	if (*argv[1] == '0' || *argv[2] == '0')
	{
		_puts("0\n");
		return (0);
	}
	if (_lenght(argv[1]) > _lenght(argv[2]))
	{
		max = argv[1];
		min = argv[2];
		l = _lenght(argv[2]);
	}
	else
	{
		max = argv[2];
		min = argv[1];
		l = _lenght(argv[1]);
	}

	t = malloc((l + 1) * sizeof(char **));
	if (t == NULL)
	{
		_puts("Error\n");
		exit(98);
	}

	for (i = 0; i < l; i++)
	{
		t[i] = _multiplyrev(max, min[l - i - 1], i);
	}
	t[i] = malloc((_lenght(max) + i + 1) * sizeof(char));

	_sum(t, l);
	_puts(t[i]);
	_putchar('\n');

	for (i = 0; i <= l; i++)
		free(t[i]);
	free(t);

	return (0);
}

/**
 * _sum - summ a set of string
 * @s: The set of strings
 * @l: The the lenght of terms
 *
 * Return: None
 */
void _sum(char **s, int l)
{
char tmp;
int  i, j = 0, k = 1;
unsigned int a, d = 0;

	for (j = 0; k == 1; j++)
	{
		a = 0;
		k = 0;
		for (i = 0; i < l; i++)
		{
			if (j < _lenght(s[i]))
			{
				a += (s[i][j] - 48);
				k = 1;
			}
		}
		if (d <= 0 && k == 0)
		{
			s[i][j] = '\0';
			j--;
		}
		else
			s[i][j] = (char)((a + d) % 10) + 48;
		d = (a + d) / 10;
	}
	j--;
	for (k = 0; k <= (j / 2); k++)
	{
		tmp = s[i][k];
		s[i][k] = s[i][j - k];
		s[i][j - k] = tmp;
	}
}

/**
 * _multiplyrev - multiplay two strings
 * @s: The first factor
 * @c: The second factor
 * @o: The offset
 *
 * Return: A pointer to the result
 */
char *_multiplyrev(char *s, char c, int o)
{
char *r;
unsigned int d = 0;
int  i, j = 0;

	r = malloc((_lenght(s) + o + 1) * sizeof(char));
	if (r == NULL)
		return (NULL);

	for (i = 0; i < o; i++)
		r[i] = '0';
	for (i = (_lenght(s) - 1); i >= 0; i--)
	{
		r[o + j++] = (char)((s[i] - 48) * (c - 48) + d) % 10 + 48;
		d = ((s[i] - 48) * (c - 48) + d) / 10;
	}
	if (d > 0)
		r[o + j++] = d + 48;
	r[o + j] = '\0';

	return (r);
}


/**
 * _isnumber - evaluate if a string is a number
 * @s: The string
 *
 * Return: 0 for false or 1 for true.
 */
int _isnumber(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * _lenght - Find out the lenght of a string
 * @s: The string
 *
 * Return: Lenght.
 */
int _lenght(char *s)
{
unsigned long long i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _puts - Print a string
 * @s: The string
 *
 * Return: Lenght.
 */
void _puts(char *s)
{
unsigned long long i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
