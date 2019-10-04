#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *p;

    p = cap_string(s);
    printf("%s", p);
    printf("%s", s);

    p = strcpy(s, "!hola?mama?\n");
    p = cap_string(s);
    printf("%s", p);
    printf("%s", s);

    p = strcpy(s, " HOLA.mama?hr{hr}hr<hr>(hr)hr,hr;hr.hr!hr?hr|hr\n");
    p = cap_string(s);
    printf("%s", p);
    printf("%s", s);

    p = strcpy(s, " \"aloh.mama?hr{hr}hr\n<\nhr>(hr)hr,hr;hr.hr!hr?hr|hr\n");
    p = cap_string(s);
    printf("%s", p);
    printf("%s", s);

    return (0);
}
