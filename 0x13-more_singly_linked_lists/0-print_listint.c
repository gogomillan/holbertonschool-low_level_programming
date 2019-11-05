#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Head of the list
 *
 * Return: Return the number of elements
 */
size_t print_listint(const listint_t *h)
{
size_t c = 0;
listint_t *e = (listint_t *)h;

	while (e != NULL)
	{
		printf("%d\n", e->n);
		c++;
		e = e->next;
	}

	return (c);
}
