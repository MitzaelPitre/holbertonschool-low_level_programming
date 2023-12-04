#include "lists.h"
/* task seven */

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @head: head of a list
 * @idx: index of the list where the new node is added
 * @n: integer elements
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	
	temp = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return NULL;
	       	new->n = n;
	       	new->prev = NULL;
		new->next = temp;
	       
		if (temp != NULL)
			temp->prev = new;
		*head = new;
		return new;
	}
	
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
		return NULL;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	new->n = n;
	new->prev = temp;
	new->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = new;
	temp->next = new;
	return (new);
}
