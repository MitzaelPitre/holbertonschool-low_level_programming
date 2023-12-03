#include "lists.h"
/* task two */

/**
 * add_nodeint - add a new node at the beginning of a linked
 * @head: head of a list
 * @n: n element
 * Return: address of the new element. NULL it is failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
