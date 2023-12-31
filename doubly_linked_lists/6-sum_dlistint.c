#include "lists.h"
/* task six */

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: head of a list
 * Return: sum of all the data (n).
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
