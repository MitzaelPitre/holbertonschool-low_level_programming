#include "lists.h"
/* last task */

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head of a list
 * @index: index of the list where the node is deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		copy = copy->next;
	}

	if (copy == NULL)
		return (-1);


	tmp = copy->prev;
	tmp->next = copy->next;

	if (copy->next != NULL)
		copy->next->prev = tmp;
	free(copy);
	return (1);
}
