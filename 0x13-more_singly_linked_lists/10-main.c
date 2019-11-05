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
    printf("| 0 -----------------\n");
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("| 1.1 [8]-----------------\n");
    delete_nodeint_at_index(&head, 8);
    print_listint(head);
    printf("| 1.2 [5] -----------------\n");
    delete_nodeint_at_index(&head, 5);
    print_listint(head);
    printf("| 1.3 [6]-----------------\n");
    delete_nodeint_at_index(&head, 6);
    print_listint(head);
    printf("| 2 -----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("| 3 -----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("| 4 -----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("| 5 -----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("| 6 -----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("| 7 -----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("| 8 -----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    printf("| 9 -----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("| 10-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("| 11-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("| 12-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("| 13-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("| 14-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("| 15-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("| 16-----------------\n");
    delete_nodeint_at_index(&head, 0);
    printf("| 17-----------------\n");
    delete_nodeint_at_index(&head, 0);
    print_listint(head);
    return (0);
}
