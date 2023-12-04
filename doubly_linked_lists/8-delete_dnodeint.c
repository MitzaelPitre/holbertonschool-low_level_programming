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
	unsigned int i;
	dlistint_t *temp;
	dlistint_t *current;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index != 0)
	{
		*head = current->next;
		if (current ->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		temp = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	temp->next = current->next;
	if (current->next != NULL)
		current->next->prev = temp;

	free(current);

	return (1);
}
