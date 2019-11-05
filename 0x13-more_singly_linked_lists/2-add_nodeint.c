#include "lists.h"

/**
 * add_nodeint - Add an elements on top of a listint_t list.
 * @head: Head of the list
 * @n: New value to add
 *
 * Return: The adress to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *e = *head;

	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
		return (NULL);
	/* (*(*head)).next = e; */
	(*head)->next = e;
	/* (*(*head)).n = n; */
	(*head)->n = n;

	return (*head);
}
