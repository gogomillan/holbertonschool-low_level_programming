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

	if (name == NULL || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	printf("%s [%u]\n", name, (_lenght(name) + 1));
	n = malloc((_lenght(name) + 1) * sizeof(char));
	if (n == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	printf("%s [%u]\n", owner, (_lenght(owner) + 1));
	o = malloc((_lenght(owner) + 1) * sizeof(char));
	if (o == NULL)
	{
		free(n);
		free(my_dog);
		return (NULL);
	}

	n = _strcpy(n, name);
	o = _strcpy(o, owner);
	my_dog->name = n;
	my_dog->owner = o;
	my_dog->age = age;

	return (my_dog);
}

/**
 * _lenght - Find out the lenght of a string
 * @s: The string
 *
 * Return: Lenght.
 */
unsigned int _lenght(char *s)
{
unsigned long i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - Copy a string
 * @d: The destiny
 * @s: The source
 *
 * Return: Lenght.
 */
char *_strcpy(char *d, char *s)
{
unsigned long i = 0;

	for (i = 0; s[i] != '\0'; i++)
		d[i] = s[i];
	d[i] = s[i];

	return (d);
}
