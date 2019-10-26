#include "variadic_functions.h"

/**
 * print_numbers - Print numbers using a separator
 * @separator: The string separator
 * @n: The quantity of numbers
 * @...: The list of numbers
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list	valist;
unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL && i != 0)
			printf("%s", separator);
		printf("%d", va_arg(valist, int));
	}
	printf("\n");
	va_end(valist);
}
