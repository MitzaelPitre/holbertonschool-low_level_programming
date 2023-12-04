#include "lists.h"
/* task four */

/**
 * free_dlistint - frees a linked list
 * @head: head of a list
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
