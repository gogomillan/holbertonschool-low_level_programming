#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t list.
 * @head: Head of the list
 *
 * Return: A pointer to the first node of the reversed list. 
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *node = *head, *prev;

	if (*head == NULL)
		return (NULL);

	while (node != NULL)
	{
		prev = node;
		printf("[%d] - ", prev->n);
		node = node->next;
		printf("[%d]", node->n);
		getchar();
		if (prev == *head)
			prev->next = NULL;
		if (node->next == NULL)
		{
			*head = node;
			node->next = prev;
			node = NULL;
		}
		else
			node->next = prev;
	}

	return (*head);
}
