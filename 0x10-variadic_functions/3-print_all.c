#include "variadic_functions.h"

/**
 * print_all - Print numbers using a separator
 * @format: The format to print
 * @...: The list of values to print
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
va_list valist;
unsigned int k = 0, l = 0, f = 0;
op_t ops[] = {
	{'c', pr_char},
	{'i', pr_integer},
	{'f', pr_float},
	{'s', pr_string},
	{'\0', NULL}
};

	va_start(valist, format);

	while (format != NULL && *(format + k) != '\0')
	{
		l = 0;
		while (ops[l].op != '\0')
		{
			if (*(format + k) == ops[l].op)
			{
				printf("%.*s", f * 2, ", ");
				(*(ops[l].f))(valist);
				f = 1;
			}
			l++;
		}
		k++;
	}
	printf("%.*s", f, "\n");
	va_end(valist);
}

/**
 * pr_integer - Print an integer
 * @valist: The list of numbers
 *
 * Return: Nothing
 */
void pr_integer(va_list valist)
{
int i;

	i = va_arg(valist, int);
	printf("%d", i);
}

/**
 * pr_char - Print a char
 * @valist: The list of numbers
 *
 * Return: Nothing
 */
void pr_char(va_list valist)
{
int c;

	c = va_arg(valist, int);
	printf("%c", c);
}

/**
 * pr_float - Print a float
 * @valist: The list of numbers
 *
 * Return: Nothing
 */
void pr_float(va_list valist)
{
double f;

	f = va_arg(valist, double);
	printf("%lf", f);
}

/**
 * pr_string - Print a string
 * @valist: The list of numbers
 *
 * Return: Nothing
 */
void pr_string(va_list valist)
{
char *s;

	s = va_arg(valist, char *);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}
