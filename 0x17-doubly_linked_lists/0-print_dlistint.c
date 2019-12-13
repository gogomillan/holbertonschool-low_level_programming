#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: Head of the list
 * Return: Quanty of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
dlistint_t *new;
int cty = 0;

	new = (dlistint_t *)h;
	while (new != NULL)
	{
		printf("%d\n", new->n);
		cty++;
		new = new->next;
	}

	return (cty);
}
