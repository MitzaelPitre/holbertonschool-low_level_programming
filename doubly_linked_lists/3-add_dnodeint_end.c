#include "lists.h"
/* task three */

/**
 * add_dnodeint_end - add a new node at the end of a linked list
 * @head: head of a list
 * @n: n element
 * Return: address of the new element. NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *temp;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }

    return (*head);
}
