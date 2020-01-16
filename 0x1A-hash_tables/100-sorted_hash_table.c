#include "hash_tables.h"

/**
 * shash_table_create - creates a shash table with a given size
 *
 * @size: size of the shash table
 * Return: the created shash table, or NULL if function fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *table;
shash_node_t **array;
unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * add_n_shash - adds a node at the beginning of a shash at a given index
 *
 * @h: head of the shash linked list
 * @key: key of the shash
 * @value: value to store
 * Return: created node
 */
shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
shash_node_t *node;

	node = *h;

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (node);
		}
		node = node->next;
	}

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = *h;

	*h = node;

	return (node);
}

/**
 * add_i_shash - adds a node on the DLL of the shash table
 *
 * @ht: pointer to the table
 * @new: new node to add
 * Return: no return
 */
void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
shash_node_t *node, *tmp;
int ret;

	node = tmp = ht->shead;

	while (node != NULL)
	{
		ret = strcmp(new->key, node->key);
		if (ret == 0)
		{
			return;
		}
		else if (ret < 0)
		{
			new->sprev = node->sprev;

			if (node->sprev)
				node->sprev->snext = new;
			else
				ht->shead = new;

			node->sprev = new;
			new->snext = node;

			return;
		}
		tmp = node;
		node = node->snext;
	}

	new->sprev = tmp;
	new->snext = NULL;

	if (ht->shead)
		tmp->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}

/**
 * shash_table_set - adds a hash (key, value) to a given shash table
 *
 * @ht: pointer to the shash table
 * @key: key of the shash
 * @value: value to store
 * Return: 1 if successes, 0 if fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int k_index;
shash_node_t *new;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_index = key_index((unsigned char *)key, ht->size);

	new = add_n_shash(&(ht->array[k_index]), key, value);

	if (new == NULL)
		return (0);

	add_i_shash(ht, new);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to the shash table
 * @key: key of the shash
 * Return: value of the shash.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int k_index;
shash_node_t *node;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	k_index = key_index((unsigned char *)key, ht->size);

	node = ht->array[k_index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints the keys and values of the shash table
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;
char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	node = ht->shead;

	while (node != NULL)
	{
		printf("%s'%s': '%s'", sep, node->key, node->value);
		sep = ", ";
		node = node->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints the keys and values of the shash table
 * in reverse
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;
char *sep;

	if (ht == NULL)
		return;

	printf("{");
	sep = "";

	node = ht->stail;

	while (node != NULL)
	{
		printf("%s'%s': '%s'", sep, node->key, node->value);
		sep = ", ";
		node = node->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table
 *
 * @ht: pointer to the shash table
 * Return: no return
 */
void shash_table_delete(shash_table_t *ht)
{
unsigned long int i;
shash_node_t *node;
shash_node_t *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while ((tmp = node) != NULL)
		{
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
