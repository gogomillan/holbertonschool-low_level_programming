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
	if (**argv == 0 || argc < 1)
		return (1);
	argc--;
	do
	{
		_putchar((argc % 10) + 48);
		argc = argc / 10;
	}
	while (argc > 0);
	_putchar('\n');

	return (0);
}
