#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void _sum(char **s, unsigned int l);
char *_multiplyrev(char *s, char c, int o);
int _isnumber(char *s);
unsigned int _lenght(char *s);
void _puts(char *s);

#endif /* HOLBERTON_H */
