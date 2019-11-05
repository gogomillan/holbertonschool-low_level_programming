#include "lists.h"

/**
 * add_nodeint_end - Add an element at the end of a listint_t list.
 * @head: Head of the list
 * @n: New value to add
 *
 * Return: The adress to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *e;
listint_t *h;

	e = malloc(sizeof(listint_t));
	if (e == NULL)
		return (NULL);
	e->n = n;
	e->next = NULL;

	if (*head == NULL)
		return (*head = e);
	h = *head;

	while (h->next != NULL)
		h = h->next;
	h->next = e;

	return (*head);
}
