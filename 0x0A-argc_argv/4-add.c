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
char *p;
int  a, c = 0;

	while (--argc)
	{
		p = argv[argc];
		while (*p != '\0')
		{
			if (*p < 48 || *p > 57)
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}
		a = atoi(argv[argc]);
		c += a;
	}
	printf("%d\n", c);

	return (0);
}
