#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: Head
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;

	if (head == NULL)
		return;

	current = (dlistint_t *)head;
	while (current->next != NULL)
	{
		current = current->next;
		free(current->prev);
	}
	free(current);
}
