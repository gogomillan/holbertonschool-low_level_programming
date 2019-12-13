#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Head
 * Return: The quantity of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
dlistint_t *new;
int cty = 0;

	new = (dlistint_t *)h;
	while (new != NULL)
	{
		cty++;
		new = new->next;
	}

	return (cty);
}
