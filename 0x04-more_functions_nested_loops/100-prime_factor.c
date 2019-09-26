#include <stdio.h>

int isprime(int number);

/**
 * main - finds and prints the largest prime factor.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int i, p, fp = 612852475143;

	for (i = 2; i <= 612852475143 && fp > 1; i++)
		if (isprime(i))
		{
			p = i;
			while ((fp % p) == 0)
				fp = fp / p;
		}
	printf("%ld\n", p);

	return (0);
}

/**
 * isprime - finds out if the number is prime
 * @number: The number to evaluate
 *
 * Return: 0 when false or 1 when true.
 */
int isprime(int number)
{
	int i, p = 1;

	for (i = 2; i < number; i++)
		if ((number % i) == 0)
			p = 0;

	return (p);
}
