#include "function_pointers.h"

/**
 * int_index - Search for an integer
 * @array: Array of elements
 * @size: The size
 * @cmp: The name of the function
 *
 * Return: The index of first element matched or 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]) != 0)
			return (i);
	return (-1);
}
