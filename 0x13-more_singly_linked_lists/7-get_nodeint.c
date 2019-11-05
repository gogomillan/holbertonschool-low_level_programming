#include "lists.h"

/**
 * get_nodeint_at_index - Return the index element of a listint_t list.
 * @head: Head of the list
 * @index: Index position 0 based
 *
 * Return: Return the listint_t element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int c = 0;
listint_t *e = head;

	while (e != NULL && c < index)
	{
		c++;
		e = e->next;
	}

	if (c != index)
		return (NULL);
	return (e);
}
