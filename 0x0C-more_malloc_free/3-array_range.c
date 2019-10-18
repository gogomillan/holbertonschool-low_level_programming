#include "holberton.h"

/**
 * array_range - create an array of integers from Min to Max
 * @min: Min value
 * @max: Max value
 *
 * Return: NULL if error or the pointer.
 */
int *array_range(int min, int max)
{
int *p, i, j = 0;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		p[j++] = i;

	return (p);
}
