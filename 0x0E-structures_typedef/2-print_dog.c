#include "dog.h"

/**
 * print_dog - Print the structure
 * @d: Pointer to the dog structure
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name : %s\n", d->name == NULL ? "(nil)" : d->name);
		if (d->age == 0)
			printf("Name : (nil)\n");
		else
			printf("Name : %f\n", d->age);
		printf("Name : %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
