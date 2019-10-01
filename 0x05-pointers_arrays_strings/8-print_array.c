#include "holberton.h"

/**
 * print_array - prints n elements of array a
 * @a: The array
 * @n: The quantity
 *
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", *(a + i));
	}
	printf("\n");
}
