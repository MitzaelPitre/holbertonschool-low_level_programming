#include "lists.h"
/* task six */

/**
 * pop_dlistint - deletes the head node of a linked list
 * @head: head of a list
 * Return: head node's data
 */

int pop_dlistint(dlistind_t **head)
{
	int hnode;
	dlistint_t *h;
	dlistint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
