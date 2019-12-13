#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node at a given position of a the list
 * @h: Head
 * @idx: The index
 * @n: The payload
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *current;
unsigned int qty = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n, new->prev = NULL, new->next = NULL;
	if (*h == NULL)
	{	*h = new;
		return (new);
	}
	current = (dlistint_t *)*h;
	if (idx == 0)
	{	new->next = current, new->prev = current->prev, current->prev = new;
		*h = new;
		return (new);
	}
	while (current->next != NULL)
	{
		if (idx == qty)
		{	new->next = current, new->prev = current->prev;
			current->prev->next = new, current->prev = new;
			return (new);
		}
		current = current->next;
		qty++;
	}
	if (idx == qty)
	{	new->next = current, new->prev = current->prev;
		current->prev->next = new, current->prev = new;
		return (new);
	}
	else if (idx == (qty + 1))
	{
		new->prev = current, current->next = new;
		return (new);
	}
	return (NULL);
}
