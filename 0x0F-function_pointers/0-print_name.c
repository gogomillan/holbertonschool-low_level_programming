#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: name of the function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
