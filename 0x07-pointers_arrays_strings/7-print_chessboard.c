#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the array of pointers string
 *
 * Return: None
 */
void print_chessboard(char (*a)[8])
{
int i;
unsigned int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < sizeof(a[i]); j++)
			putchar(a[i][j]);
		putchar('\n');
	}
}
