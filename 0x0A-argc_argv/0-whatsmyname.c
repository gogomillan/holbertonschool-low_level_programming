#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: 1 if no parameters, 0 if parameter are OK.
 */
int main(int argc, char **argv)
{
int i;

	if (argc <= 0)
		return (1);
	for (i = 0; argv[0][i] != '\0'; i++)
		_putchar(argv[0][i]);
	_putchar('\n');
	return (0);
}
