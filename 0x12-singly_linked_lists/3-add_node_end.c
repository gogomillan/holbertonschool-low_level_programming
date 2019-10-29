#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 * @head: The current head of list
 * @str: The new str to add
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *element, *e;
size_t i = 0;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);
	while (*(str + i) != '\0')
		i++;
	element->str = strdup(str);
	element->len = i;
	element->next = NULL;

	if (*head != NULL)
	{
		e = *head;
		while (e->next != NULL)
			e = e->next;
		e->next = element;
	}
	else
		*head = element;

	return (element);
}
