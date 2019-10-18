#include "holberton.h"
#include <limits.h>

/**
 * _calloc - reserve a space in memory of size lenght
 * @nmemb: Quantity of elements
 * @size: The size of each element
 *
 * Return: NULL if error or the pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	/* if (size >= UINT_MAX / nmemb || nmemb >= UINT_MAX / size) */
	/* return (NULL);*/
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return ((void *)p);
}
