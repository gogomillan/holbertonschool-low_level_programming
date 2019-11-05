#include "lists.h"

/**
 * pop_listint - Delete an the elements of a listint_t list.
 * @head: Head of the list
 *
 * Return: Return the value of element
 */
int pop_listint(listint_t **head)
{
size_t c = 0;
listint_t *e = *head;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	c = e->n;
	free(e);

	return (c);
}
