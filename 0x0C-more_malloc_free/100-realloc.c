#include "holberton.h"

/**
 * _realloc - modify the memory of a pointer
 * @ptr: The pointer
 * @old_size: Old value
 * @new_size: New value
 *
 * Return: NULL if error or the pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *po, *pn;
unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	po = ptr;
	pn = malloc(new_size * sizeof(char));
	if (pn == NULL)
		return (NULL);

	if (old_size < new_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
		pn[i] = po[i];
	free(po);

	return (pn);
}
