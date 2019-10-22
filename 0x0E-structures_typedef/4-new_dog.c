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

	if (name == NULL || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = _strdup(name);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = _strdup(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
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

/**
 * _strdup - create a new same string from other
 * @str: the original string
 *
 * Return: The new space of memory to the new string.
 */
char *_strdup(char *str)
{
unsigned int j = 0, size;
char *s;

	if (str == NULL)
	return (NULL);

	while (str[j] != '\0')
		j++;
	size = j + 1;
	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		s[j] = str[j];
	return (s);
}
