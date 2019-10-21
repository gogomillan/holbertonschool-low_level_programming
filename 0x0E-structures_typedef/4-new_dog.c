#include "dog.h"

/**
 * new_dog - Create the structure
 * @name: The name
 * @age: The age
 * @owner: The owner
 *
 * Return: The pointer to structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
char  *n, *o;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	n = malloc(strlen(name));
	if (n == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	o = malloc(strlen(name));
	if (o == NULL)
	{
		free(my_dog);
		free(n);
		return (NULL);
	}

	strcpy(n, name);
	strcpy(o, owner);
	my_dog->name = n;
	my_dog->owner = o;
	my_dog->age = age;

	return (my_dog);
}
