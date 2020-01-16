#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: pointer to the hash table
 * @key: The key for the hash table
 * @value: The value for the hash table
 *
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *head = NULL, *node = NULL;

	if (ht == NULL || ht->array == NULL || value == NULL)
		return (0);
	if (key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	head = ht->array[index];
	while (head->next != NULL)
		head = head->next;
	head->next = node;

	return (1);
}
