#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *node = NULL;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s' : '%s'", node->key, node->value);
			if (ht->array[i + 1] == NULL)
				break;
			printf(", ");
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}

