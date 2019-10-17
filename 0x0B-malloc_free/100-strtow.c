#include "holberton.h"

void _countword(char *str, int *t);

/**
 * strtow - Split a string into words
 * @str: the string
 *
 * Return: A pointer to the array of words.
 */
char **strtow(char *str)
{
char **p;
int i, j, t = 0, l = 0, sp = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	_countword(str, &t);
	p = (char **) malloc((t + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	//for (i = 0; i <= t; i++)
		//*(p + i) = (char *) malloc((lm + 1) * sizeof(char));
		//if (*(p + i) == NULL)
			//return (NULL);
	i = l = 0;
	sp = 1;
	for (j = 0; str[j] != '\0'; j++)
		if (str[j] == ' ')
		{
			if (sp == 0)
			{
				p[i][l] = '\0';
				l = 0;
				i++;
			}
			sp = 1;
		}
		else
		{
			p[i][l] = str[j];
			l++;
			sp = 0;
		}
	if (sp == 0)
	{
		p[i][l] = '\0';
		i++;
	}
	p[i] = NULL;
	return (p);
}

void _countword(char *str, int *t)
{
int i, sp = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ')
		{
			if (sp == 0)
				(*t)++;
			sp = 1;
		}
		else
			sp = 0;
	if (sp == 0)
		(*t)++;
}
