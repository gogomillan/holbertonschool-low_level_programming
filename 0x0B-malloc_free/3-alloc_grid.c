#include "holberton.h"

/**
 * alloc_grid - concatenate two string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: A pointer to the new concatenated string.
 */
int **alloc_grid(int width, int height)
{
int i, j, **h;

	if (width <= 0 && height <= 0)
		return (NULL);

	h = (int **) malloc(height * sizeof(*h));
	if (h == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(h + i) = malloc(width * sizeof(**h));
		if (*(h + i) == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			h[i][j] = 0;
	}
	return (h);
}
