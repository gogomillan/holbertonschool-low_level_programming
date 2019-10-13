#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @argc: Qty of parameters
 * @argv: The parameters themselves
 *
 * Return: 1 if no parameters, 0 if parameter are OK.
 */
int main(int argc, char **argv)
{
int i, j = 0;

	while (j < argc)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
			_putchar(argv[j][i]);
		_putchar('\n');
		j++;
	}

	return (0);
}
