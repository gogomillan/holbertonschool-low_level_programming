#include "lists.h"

/**
 * list_len - Returns the number of elements of list_t's type.
 * @h: Head of the list of elements.
 *
 * Return:	Number of nodes.
 */
size_t list_len(const list_t *h)
{
list_t *e;
size_t c = 0;

	e = (list_t *)h;
	while (h != NULL && e != NULL)
	{
		c++;
		e = e->next;
	}
	return (c);
}
