#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - Like a class for a dog
 * @name: The name
 * @age: The age
 * @owner: The dog's owner
 *
 * Description: This scructure let define the characteristics of a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

char *_strdup(char *str);
unsigned int _lenght(char *s);
char *_strcpy(char *d, char *s);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);

#endif /* HOLBERTON_H */
