#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    str = "9876543210";
    puts_half(str);
    str = "Holberton";
    puts_half(str);
    str = "School";
    puts_half(str);
    return (0);
}
