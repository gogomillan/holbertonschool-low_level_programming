#include "lists.h"

listint_t *swap_listint (listint_t *node, listint_t *prev);

/**
 * reverse_listint - Reverse a listint_t list.
 * @head: Head of the list
 *
 * Return: A pointer to the first node of the reversed list. 
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *new;

	if (head == NULL || *head == NULL)
		return (NULL);

	new = swap_listint ((*head)->next, *head);
	(*head)->next = NULL;
	*head = new;
	
	return (*head);
}

/**
 * swap_lisint - swap two elements of a listint_t list
 * @node: The current node
 * @prev: The previous node
 *
 * Return: Nothing
 */
listint_t *swap_listint (listint_t *node, listint_t *prev)
{
listint_t *head;

	if (node == NULL)
		return (prev);
	if (node->next == NULL)
	{
		node->next = prev;
		return (node);
	}
	head = swap_listint (node->next, node);
	node->next = prev;
	return (head);
}
