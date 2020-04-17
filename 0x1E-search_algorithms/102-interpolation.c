#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm.
 * @array: Pointer to the array structure
 * @size: Size of the array
 * @value: Value to find
 * Return: Index or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
	if (pos > size)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}

	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					(value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
