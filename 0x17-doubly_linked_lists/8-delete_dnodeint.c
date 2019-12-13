#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given position of a the list
 * @head: Head
 * @index: The index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int qty = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);

	current = (dlistint_t *)*head;
	if (index == 0)
	{
		if (current->next != NULL)
			current->next->prev = NULL, *head = current->next;
		else
			*head = NULL;
		free(current);
		return (1);
	}
	while (current->next != NULL)
	{
		if (index == qty)
		{
			current->prev->next = current->next, current->next->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		qty++;
	}
	if (index == qty)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
