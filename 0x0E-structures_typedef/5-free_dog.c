#include "dog.h"

/**
 * free_dog - Release memory from the structure
 * @d: The dog
 *
 * Return: The pointer to structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
