#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'H', 100, "lberton");
    print_all("ceis", 'H', 0, "lberton");
    print_all("ceis", 'H', 0, "Holberton School");
    print_all("ecis", 'H', 0, "Holberton School");
    print_all("cise", 'H', 0, "Holberton School");
    print_all("cisecise", 'H', 0, NULL, 'H', 100, "MAMA");
    print_all(NULL, 'H', 0, "lberton");
	printf("%f", 10.5);
    return (0);
}
