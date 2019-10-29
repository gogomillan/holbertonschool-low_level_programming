#include "lists.h"

void _inicial (void) __attribute__ ((constructor));

/**
 * _init - Function before main
 *
 * Return: Nothing
 */
void _inicial (void)
{
	printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
