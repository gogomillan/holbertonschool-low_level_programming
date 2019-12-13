#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Head
 * @index: The nth position
 * Return: The quantity of elements in the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *new;
unsigned int cty = 0;

	new = (dlistint_t *)head;
	while (new != NULL)
	{
		if (cty == index)
			return (new);
		cty++;
		new = new->next;
	}

	return (NULL);
}
