#include "lists.h"

/**
 * listint_len - Count all the elements of a listint_t list.
 * @h: Head of the list
 *
 * Return: Return the number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t c = 0;
listint_t *e = (listint_t *)h;

	while (e != NULL)
	{
		c++;
		e = e->next;
	}

	return (c);
}
