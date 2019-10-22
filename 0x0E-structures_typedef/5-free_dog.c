#include "dog.h"

/**
 * new_dog - Create the structure
 * @name: The name
 * @age: The age
 * @owner: The owner
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
