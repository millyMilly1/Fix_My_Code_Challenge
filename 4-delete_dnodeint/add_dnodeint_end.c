#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a doubly-linked list.
 *
 * @head: The address of the pointer to the first element of the list.
 * @n: The number to store in the new element.
 *
 * Return: A pointer to the new element, or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *current;

    /* Allocate memory for the new node */
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        return (NULL);
    }

    /* Initialize the new node */
    new->n = n;
    new->next = NULL;

    if (*head == NULL)
    {
        /* If the list is empty, set the new node as the head */
        new->prev = NULL;
        *head = new;
        return (new);
    }

    current = *head;

    /* Traverse the list to find the last node */
    while (current->next != NULL)
    {
        current = current->next;
    }

    /* Update the links to add the new node at the end */
    current->next = new;
    new->prev = current;

    return (new);
}
