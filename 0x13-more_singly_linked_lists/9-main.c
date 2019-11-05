#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    printf("0 -----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    printf("1 -----------------\n");
    insert_nodeint_at_index(&head, 0, 3333);
    print_listint(head);
    printf("2 -----------------\n");
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("3 -----------------\n");
    insert_nodeint_at_index(&head, 5, 4096);
    print_listint(head);
    printf("4 -----------------\n");
    insert_nodeint_at_index(&head, 0, 1001);
    print_listint(head);
    printf("5 -----------------\n");
    insert_nodeint_at_index(&head, 9, 9999);
    print_listint(head);
    printf("6 -----------------\n");
    insert_nodeint_at_index(&head, 11, 1111);
    print_listint(head);
    printf("7 -----------------\n");
    insert_nodeint_at_index(&head, 13, 1313);
    print_listint(head);
    printf("8 -----------------\n");
    insert_nodeint_at_index(&head, -1, -1111);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
