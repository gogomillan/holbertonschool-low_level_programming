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
char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
