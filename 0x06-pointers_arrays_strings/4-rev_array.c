#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - Print in reverse
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
    int i;

    i = --n;
    while (i >= 0)
    {
        if (i != n)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i--;
    }
    printf("\n");
}
