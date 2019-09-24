#include <stdio.h>

/**
 * main - Compute and print the 4000000 sumary based on Fibonacci
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long a, b, t, s;

	a = 1;
	b = 2;
	s = 0;
	while (b < 4000000)
	{
		if ((b % 2) == 0)
			s += b;
		t = a;
		a = b;
		b = t + b;
	}

	printf("%ld\n", s);
	return (0);
}
