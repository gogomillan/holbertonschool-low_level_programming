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
int  a, b, c = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);

	return (0);
}
