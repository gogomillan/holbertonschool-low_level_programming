#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: Is the size of the array
 *
 * Return: A pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *head = NULL;
hash_node_t **node = NULL;
unsigned long int i;

	head = malloc(sizeof(hash_table_t));
	if (head == NULL)
		return (NULL);
	node = malloc(size  * sizeof(hash_node_t *));
	if (node == NULL)
	{
		free(head);
		return (NULL);
	}
	for (i = 0; i <= size; i++)
		node[i] = NULL;
	head->size = size;
	head->array = node;

	return (head);
}
