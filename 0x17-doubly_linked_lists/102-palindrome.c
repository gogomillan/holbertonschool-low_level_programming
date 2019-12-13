#include <stdio.h>
#include <stdlib.h>

int palindrome(int pal);
int _cntdig(int val);
int _pow(int base, int exp);

int main()
{
int a, b, max = 0;

	for (a = 111; a <= 999; a++)
		for (b = a; b <= 999; b++)
			if(palindrome(a * b) == 1)
			{
				printf("%d x %d = %d\n", a, b, a * b);
				if ((a * b) > max)
					max = a * b;
			}
	printf("\nThe max is : %d\n", max);

	return (1);
}

int palindrome(int pal)
{
int i;

	for (i = 1; i <= (_cntdig(pal) / 2); i++)
		if (((pal / _pow(10, (_cntdig(pal) - i))) % 10) != ((pal / _pow(10, i - 1)) % 10))
			return (-1);
	return (1);
}

int _cntdig(int val)
{
int i;

	for (i = 0; val > 0; i++)
		val /= 10;

	return (i);
}

int _pow(int base, int exp)
{
int i, acum = base;

	if (exp == 0)
		return (1);

	for (i = 1; i < exp; i++)
		acum = acum * base;

	return (acum);
}
