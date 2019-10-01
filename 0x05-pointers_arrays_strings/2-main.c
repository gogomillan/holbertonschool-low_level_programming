#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "Holberton!";
	len = _strlen(str);
	printf("%s - %d\n", str, len);
	str = "School!";
	len = _strlen(str);
	printf("%s - %d\n", str, len);
	str = "Your future is here!";
	len = _strlen(str);
	printf("%s - %d\n", str, len);
	return (0);
}
