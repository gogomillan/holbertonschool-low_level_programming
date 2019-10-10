#include <stdio.h>
#include <math.h>

/**
 * main - Compute and print the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long double i, a, b, t;

	a = 1;
	b = 2;
	printf("1");
	for (i = 1; i < 97; i++)
	{
		printf(", %0.Lf", b);
		t = a;
		a = b;
		b = t + b;
	}

	printf("\n");
	return (0);
}
