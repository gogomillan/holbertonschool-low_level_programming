#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t linked list.
 * @head: Head
 * Return: The sum of payload of elements in the list (n).
 */
int sum_dlistint(dlistint_t *head)
{
int cty = 0;

	while (head != NULL)
	{
		cty += head->n;
		head = head->next;
	}

	return (cty);
}
