#include "lists.h"

/**
 * insert_nodeint_at_index - Insert the index element of a listint_t list.
 * @head: Head of the list
 * @idx: Index position 0 based
 * @n: The value to insert
 *
 * Return: Return the listint_t element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int c = 0;
listint_t *e = *head, *new;

	while (e != NULL && c < idx)
	{
		c++;
		e = e->next;
	}

	if (c != idx)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = e->n;
	new->next = e->next;
	e->n = n;
	e->next = new;
	return (new);
}
