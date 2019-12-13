#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @h: Head
 * @n: The payload
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *current;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{	*head = new;
		return (new);
	}

	current = (dlistint_t *)*head;
	while (current != NULL)
	{
		if (current->next == NULL)
			new->prev = current;
		current = current->next;
	}
	new->prev->next = new;

	return (new);
}
