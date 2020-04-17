#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 *                 Binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: It is the value to search for
 *
 * Return: The first index where value is located, -1 if any error
 */
int binary_search(int *array, size_t size, int value)
{
size_t i = 0, j = size - 1, pivot, x;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		printf("Searching in array: ");
		for (x = i; x < j; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		pivot = ((i + j) / 2);

		if (array[pivot] < value)
			i = pivot + 1;
		else if (array[pivot] > value)
			j = pivot - 1;
		else
			return (pivot);
	}

	return (-1);
}
