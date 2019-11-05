#include "lists.h"

/**
 * free_listint_safe - Realease all the elements of a listint_t list.
 * @h: Head of the list
 *
 * Return: Return the number of elements
 */
size_t free_listint_safe(listint_t **h)
{
size_t c = 0;
listint_t *e, *prev;

	if (*h == NULL)
		return (0);
	e = *h;
	if (e == e->next)
	{
		free(e);
		return (1);
	}

	while (e != NULL)
	{
		prev = e;
		c++;
		if (e->next > e)
		{
			e = e->next;
			free(prev);
			/* free(e); */
			break;
		}
		e = e->next;
		free(prev);
	}
	*h = NULL;

	return (c);
}
