#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - This is the controller
 * @n: Starting point
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
		printf("%d%s", i, (i != 98 ? ", " : ""));
	for (i = n; i >= 98 && n != 98; i--)
		printf("%d%s", i, (i != 98 ? ", " : ""));
	printf("\n");
}
