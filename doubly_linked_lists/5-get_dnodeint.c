#include "lists.h"
/* task five */

/**
 * free_dlistint2 - frees a linked list
 * @head: head of a list
 * Return: no return
 */

void free_dlistint2(dlistint_t **head)
{
	dlistint_t *temp;
	dlistint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
