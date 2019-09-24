#include <stdio.h>

/**
 * main - Compute and print the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long long i, a, b, t;

	a = 0;
	b = 1;
	for (i = 1; i <= 50; i++)
	{
		printf("%s", i == 1 ? "" : ", ");
		printf("%lld", b);
		t = a;
		a = b;
		b = t + b;
	}

	printf("\n");
	return (0);
}
