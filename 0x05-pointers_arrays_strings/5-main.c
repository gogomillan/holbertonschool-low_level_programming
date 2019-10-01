#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Holberton";
    char s1[] = "School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);

    printf("%s\n", s1);
    rev_string(s1);
    printf("%s\n", s1);

    return (0);
}
