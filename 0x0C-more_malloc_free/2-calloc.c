#include "holberton.h"

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
unsigned int b, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / nmemb || nmemb >= UINT_MAX / size)
		return (NULL);

	b = nmemb * size;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = 0;
	return (p);
}
