#include <stdio.h>
#include <stdlib.h>

/**
 * _lenght - Find out the lenght of a string
 * @s: The string
 *
 * Return: Lenght.
 */
unsigned int _lenght(char *s)
{
unsigned long i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

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
char *p, s[20];
int (*opcodes)(int, char **);
int i;

	opcodes = &main;
	p = (char *)opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit (2);
	}

	for (i = 0; i < atoi(argv[1]); i++)
	{
		if (i != 0)
			printf(" ");
		sprintf(s, "%02x", *(p + i));
		printf("%s", s + _lenght(s) - 2);
	}
	printf("\n");

	return (0);
}
