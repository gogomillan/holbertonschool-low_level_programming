#include "lists.h"

/**
 * sum_listint - Sum all the elements of a listint_t list.
 * @head: Head of the list
 *
 * Return: Return the number of elements
 */
int sum_listint(listint_t *head)
{
int s = 0;
listint_t *e = head;

	while (e != NULL)
	{
		s += e->n;
		e = e->next;
	}

	return (s);
}
