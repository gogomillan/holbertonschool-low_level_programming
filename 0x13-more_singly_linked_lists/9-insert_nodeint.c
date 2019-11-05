#include "lists.h"

/**
 * insert_nodeint_at_index - Insert the index element of a listint_t list.
 * @head: Head of the list
 * @idx: Index position 0 based
 * @n: The value to insert
 *
 * Return: Return the listint_t element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int c = 0;
listint_t *node, *new;

	if (head == NULL)
		return (NULL);

	node = *head;
	while (node->next != NULL && c < idx)
	{
		c++;
		node = node->next;
	}
	/* if ((idx - c) > 1) */
	if (c != idx)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	if (node->next == NULL && c < idx)
	{
		node->next = new;
		new->n = n;
		new->next = NULL;
		return (new);
	}
	new->n = node->n;
	new->next = node->next;
	node->n = n;
	node->next = new;

	return (node);
}
