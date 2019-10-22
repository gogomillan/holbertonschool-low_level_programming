#include "dog.h"

unsigned int _lenght(char *s);
char *_strcpy(char *d, char *s);

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
	n = malloc(_lenght(name));
	if (n == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	o = malloc(_lenght(name));
	if (o == NULL)
	{
		free(my_dog);
		free(n);
		return (NULL);
	}

	_strcpy(n, name);
	_strcpy(o, owner);
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
 * _lenght - Find out the lenght of a string
 * @s: The string
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
