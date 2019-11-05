#include "lists.h"

/**
 * reverse_listint - Reverse a listint_t list.
 * @head: Head of the list
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	while (*head)
	{
		next = (*head)->next; /* Saves the next position					*/
		(*head)->next = prev; /* Makes point the current point to previous	*/
		prev = *head;		  /* Sets the new previous from the current	pos	*/
		*head = next;		  /* Moves the head to the next position		*/
	}
	*head = prev;			  /* The previous is the new head				*/

	return (*head);
}
