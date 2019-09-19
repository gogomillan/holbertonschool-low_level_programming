#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int u;

	for (d = 48; d <= 57; d++)
	for (u = 48; u <= 57; u++)
	{
		if (d + u > 96)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(d);
		putchar(u);
	}
	putchar('\n');

	return (0);
}
