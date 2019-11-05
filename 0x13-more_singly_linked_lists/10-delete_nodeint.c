#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the index element of a listint_t list.
 * @head: Head of the list
 * @index: Index position 0 based
 *
 * Return: Return 1 if succeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int c = 0;
listint_t *node = *head, *next;

	if (*head == NULL)
		return (-1);

	while (node != NULL && c < index)
	{
		c++;
		node = node->next;
	}
	if (c != index)
		return (-1);

	if (node->next != NULL)
	{
		next = node->next;
		node->n = next->n;
		node->next = next->next;
		free(next);
	}
	else
	{
		free(node);
		*head = NULL;
	}

	return (1);
}
