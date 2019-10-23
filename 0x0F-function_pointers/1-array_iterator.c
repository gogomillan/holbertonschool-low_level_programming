#include "function_pointers.h"

/**
 * array_iterator - prints a name
 * @array: Array of elements to print
 * @size: The size
 * @action: The name of the function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
