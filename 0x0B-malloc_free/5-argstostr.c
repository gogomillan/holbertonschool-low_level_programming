#include "holberton.h"

/**
 * argstostr - Concatenate the parameteres
 * @ac: the argc
 * @av: the argv
 *
 * Return: A pointer to the grid.
 */
char *argstostr(int ac, char **av)
{
char *p;
int i, j, t = 0;

	if (ac <= 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			t++;
		t++;
	}
	p = (char *)malloc(t + 1);
	if (p == NULL)
		return (NULL);
			
	t = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			p[t++] = av[i][j];
		p[t++] = '\n';
	}
	p[t++] = '\0';

	return (p);
}
