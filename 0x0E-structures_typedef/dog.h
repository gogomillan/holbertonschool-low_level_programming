#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct dog - Like a class for a dog
 * @name: The name
 * @age: The age
 * @owner: The dog's owner
 *
 * Description: This scructure let define the characteristics of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);

#endif /* HOLBERTON_H */
