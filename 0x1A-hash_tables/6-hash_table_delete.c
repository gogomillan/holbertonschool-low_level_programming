#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: Table hash
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *tmp;
unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
