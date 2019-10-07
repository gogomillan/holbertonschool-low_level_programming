#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    s = "";
    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    s = "MAMA";
    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    s = "MAMAN";
    f = _strchr(s, 'N');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    s = "L";
    f = _strchr(s, 'L');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    return (0);
}
