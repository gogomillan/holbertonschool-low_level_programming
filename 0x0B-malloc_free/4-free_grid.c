#include "holberton.h"

/**
 * free_grid - Release an amout of memory
 * @grid: the width of grid
 * @height: the height f the grid
 *
 * Return: A pointer to the grid.
 */
void free_grid(int **grid, int height)
{
int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
