#include "lists.h"

/**
 * free_listint2 - Release the memory space of a list
 * @head: Head of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
listint_t *f;
listint_t *e;

	if (head == NULL)
		return;

	e = *head;
	while (e != NULL)
	{
		f = e;
		e = e->next;
		free(f);
	}
	*head = NULL;
}
