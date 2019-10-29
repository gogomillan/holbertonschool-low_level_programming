#include "lists.h"

/**
 * free_list - Release de memory of the list
 * @head: The current head of list
 *
 * Return: the address of the new element, or NULL if it failed.
 */
void free_list(list_t *head)
{
list_t *element, *e;

	if (head != NULL)
	{
		e = head;
		while (e != NULL)
		{
			element = e;
			e = e->next;
			free(element->str);
			free(element);
		}
	}
}
