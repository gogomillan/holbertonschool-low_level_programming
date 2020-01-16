#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: The hash key
 * @size: the size of the hash table
 *
 * Return: the index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2((unsigned char *)key) % size);
}
