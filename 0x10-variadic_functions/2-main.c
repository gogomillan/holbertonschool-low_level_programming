#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings(NULL, 2, "Jay", "Django");
    print_strings("", 2, "Jay", "Django");
    print_strings("; ", 3, "Jay", NULL, "Django");
    return (0);
}
