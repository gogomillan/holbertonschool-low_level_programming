#include "lists.h"

/**
 * find_listint_loop - Find the loopin the elements of a listint_t list.
 * @head: Head of the list
 *
 * Return: Return the element when the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *e = head, *next;

	if (e == NULL)
		return (NULL);
	if (e == e->next)
		return (e);

	while (e != NULL)
	{
		printf("\n[%d]", e->n);
		getchar();
		next = e->next;
		while (next && next )
		{
			printf("| %d - ", next->n);
			if (e == next)
				return (e);
			next = next->next;
		}
		e = e->next;
	}

	return (e);
}
