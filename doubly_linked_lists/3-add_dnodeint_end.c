#include "lists.h"
/* task three */

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: head of a list
 * @n: n element
 * Return: address of the new element. NULL if it failed
 */

dlistint_t *add_nodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	(void)temp;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next 1= NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}
