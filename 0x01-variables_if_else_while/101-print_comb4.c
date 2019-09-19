#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;
	int id = 49;
	int u;
	int iu = 50;

	for (c = 48; c <= 57; c++)
	{
		for (d = id; d <= 57; d++)
		{
			for (u = iu; u <= 57; u++)
			{
				if (c + d + u > 147)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(c);
				putchar(d);
				putchar(u);
			}
			iu++;
		}
		id++;
		iu = c + 3;
	}
	putchar('\n');

	return (0);
}
