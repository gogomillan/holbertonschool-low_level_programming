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
	int iu = 0;

	int digit[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (d = 0; d <= 99; d++)
	{
		iu = d + 1;
		for (u = iu; u <= 99; u++)
		{
			if (d + u > 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(digit[(d / 10)]);
			putchar(digit[(d % 10)]);
			putchar(' ');
			putchar(digit[(u / 10)]);
			putchar(digit[(u % 10)]);
		}
	}
	putchar('\n');

	return (0);
}
