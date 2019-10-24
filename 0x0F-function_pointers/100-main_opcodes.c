#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the n first opcodes
 *
 * @argc: The qty of parameters
 * @argv: The parameters array
 *
 * Return: The add
 *
 */
int main(int argc, char **argv)
{
char *p;
int (*opcodes)(int, char **);
int i;

	opcodes = &main;
	p = (char *)opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < atoi(argv[1]); i++)
	{
		if (i != 0)
			printf(" ");
		printf("%02hhx", *(p + i));
	}
	printf("\n");

	return (0);
}
