#include "lists.h"

/**
 * find_listint_loop - Find the loopin the elements of a listint_t list.
 * @head: Head of the list
 *
 * Return: Return the element when the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *e = head;

	if (e == NULL)
		return (NULL);
	if (e == e->next)
		return (e);

	while (e != NULL)
	{
		if (e->next > e)
		{
			e = e->next;
			return (e);
		}
		e = e->next;
	}

	return (e);
}
