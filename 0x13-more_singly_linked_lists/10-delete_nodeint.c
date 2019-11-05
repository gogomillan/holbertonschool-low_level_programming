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
listint_t *node, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	prev = node;
	while (node->next != NULL && c < index)
	{
		c++;
		prev = node;
		node = node->next;
	}
	if (c != index)
		return (-1);

	if (node->next == NULL)
	{
		if (index == 0)
			*head = NULL;
		else
			prev->next = NULL;
		free(node);
	}
	else
	{
		if (index == 0)
			*head = node->next;
		else
			prev->next = node->next;
		free(node);
	}

	return (1);
}
