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
	int iu = 49;

	for (d = 48; d <= 57; d++)
	{
		for (u = iu; u <= 57; u++)
		{
			if (d + u > 97)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(d);
			putchar(u);
		}
		iu++;
	}
	putchar('\n');

	return (0);
}
