#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a double pointer to the beginning of a listint_t list
 * @n: integer to add in the new node
 *
 * Return: address of new node or
 *         NULL if error
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;  // declare a pointer to a new node

    // check if head pointer is NULL, meaning an empty list
    if (head == NULL)
        return (NULL);

    // allocate memory for new node, and check if allocation was successful
    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    // set the "n" value of the new node to the passed integer parameter
    new->n = n;

    // set the "next" pointer of the new node to point to the current head of the list
    new->next = *head;

    // set the head pointer to point to the new node, making it the new head of the list
    *head = new;

    // return a pointer to the new node
    return (new);
}
