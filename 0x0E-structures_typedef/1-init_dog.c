#include "dog.h"

/**
 * init_dog - Intialize the dog structure
 * @d: Pointer to the dog structure
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
