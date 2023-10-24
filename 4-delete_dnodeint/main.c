#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head = NULL;
    int i;

    for (i = 0; i < 10; i++)
    {
        add_dnodeint_end(&head, i);
        print_dlistint(head);
        printf("-----------------\n");
    }

    for (i = 0; i < 10; i++)
    {
        delete_dnodeint_at_index(&head, 0);
        print_dlistint(head);
        printf("-----------------\n");
    }

    free_dlistint(head);
    return (EXIT_SUCCESS);
}
