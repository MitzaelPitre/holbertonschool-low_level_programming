#include "lists.h"
/* task two */

/**
 * add_dnodeint - add a new node at the beginning of a linked
 * @head: head of a list
 * @n: n element
 * Return: address of the new element, NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
