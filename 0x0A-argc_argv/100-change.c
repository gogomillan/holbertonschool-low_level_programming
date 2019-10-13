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
int  a = 0, q = 0, c[] = { 25, 10, 5, 2, 1, 0 }, *cp = c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	while (*cp && a >= 0)
	{
		q += a / *cp;
		a -= (a / *cp) * *cp;
		cp++;
	}
	printf("%d\n", q);

	return (0);
}
