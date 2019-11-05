#include "lists.h"

/**
 * print_listint_safe - Prints all the elements of a listint_t list.
 * @head: Head of the list
 *
 * Return: Return the number of elements
 */
size_t print_listint_safe(const listint_t *head)
{
size_t c = 0;
listint_t *e = (listint_t *)head;

	while (e != NULL)
	{
		printf("[%p] %d\n", (void *)e, e->n);
		c++;
		if (e->next > e)
		{
			e = e->next;
			printf("-> [%p] %d\n", (void *)e, e->n);
			/* exit(98); */
			break;
		}
		e = e->next;
	}

	return (c);
}
