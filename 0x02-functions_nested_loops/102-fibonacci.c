#include <stdio.h>

/**
 * main - Compute and print the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long i, a, b, t;

	a = 1;
	b = 2;
	printf("1");
	for (i = 1; i < 50; i++)
	{
		printf(", %ld", b);
		t = a;
		a = b;
		b = t + b;
	}

	printf("\n");
	return (0);
}
