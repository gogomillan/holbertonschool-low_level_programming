#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);

    s = "hello, world";
    f = "h";
    t = _strstr(s, f);
    printf("%s\n", t);

    s = "hello, world";
    f = "d";
    t = _strstr(s, f);
    printf("%s\n", t);

    //s = "hello, world";
    //f = "k";
    //t = _strstr(s, f);
    //printf("%s\n", t);

    s = "hello, world";
    f = "";
    t = _strstr(s, f);
    printf("-%s\n", t);

    s = "hello, wworld";
    f = "world";
    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
