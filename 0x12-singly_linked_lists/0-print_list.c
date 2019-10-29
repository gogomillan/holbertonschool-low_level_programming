#include "lists.h"

/**
 * print_list - Prints a list of elements of list_t's type.
 * @h: List of elements.
 *
 * Return:	Number of nodes.
 */
size_t print_list(const list_t *h)
{
list_t *e;
size_t c = 0;

	e = (list_t *)h;
	while (h != NULL && e != NULL)
	{
		printf("[%u] %s\n", e->len, e->str == NULL ? "(nil)" : e->str);
		c++;
		e = e->next;
	}
	return (c);
}
