#include "lists.h"
/* task five */

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head of a list
 * @index: index of the node
 * Return: nth node. If node does not exist, returns NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
