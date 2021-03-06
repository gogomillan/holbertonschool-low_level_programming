#include "lists.h"

/**
 * free_listint - Release the memory space of a list
 * @head: Head of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
listint_t *f;
listint_t *e = head;

	while (e != NULL)
	{
		f = e;
		e = e->next;
		free(f);
	}
}
