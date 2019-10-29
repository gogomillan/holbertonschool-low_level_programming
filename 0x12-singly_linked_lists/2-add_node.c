#include "lists.h"

/**
 * add_node - Adds a new node
 * @head: The current head of list
 * @str: The new str to add
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *element;
size_t i = 0;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);
	while (*(str + i) != '\0')
		i++;
	element->str = strdup(str);
	element->len = i;
	element->next = *head;

	*head = element;

	return (element);
}
