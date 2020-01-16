#include "hash_tables.h"

/**
 * hash_table_get -function that retrieves a value associated with a key.
 * @ht: hash table where you are going to look into
 * @key: key you are looking for
 *
 * Return: the value associated with the key, or NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx = 0;
hash_node_t *node = NULL;

	if (key == NULL)
		return (NULL);

	if (ht != NULL)
	{
		idx = key_index((const unsigned char *)key, ht->size);
		node = ht->array[idx];
		/* Look for key and return value if found */
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}
