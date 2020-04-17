#include "search_algos.h"

void prn_array(int *array, int low, int high);
int _adv_binary(int *array, int key, int low, int high);

/**
 * advanced_binary - function that searches for a value in a sorted array of
 *                   integers (Recursive).
 * @array: array of integer values
 * @size: size of the array
 * @value: to find matching element
 *
 * Return: -1 if value not present or array is NULL OR index if found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (_adv_binary(array, value, 0, size - 1));
}

/**
 * _adv_binary - The real recursive function for binary search.
 * @array: array of integer values
 * @key: value to match element
 * @low: lower half of subarray
 * @high: upper half of subarray
 *
 * Return: -1 if value not present or array is NULL OR index if found
 */
int _adv_binary(int *array, int key, int low, int high)
{
	int mid;

	if (high >= low)
	{
		mid = low + (high - low) / 2;
		prn_array(array, low, high);
		if ((mid == 0 || key > array[mid - 1]) && array[mid] == key)
			return (mid);
		else if (key > array[mid])
			return (_adv_binary(array, key, (mid + 1), high));
		else
			return (_adv_binary(array, key, low, mid));
	}
	return (-1);
}

/**
 * prn_array - Print the array
 * @array: array of integer values
 * @low: lower half of subarray
 * @high: upper half of subarray
 *
 * Return: na voided function
 */
void prn_array(int *array, int low, int high)
{
	int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}
