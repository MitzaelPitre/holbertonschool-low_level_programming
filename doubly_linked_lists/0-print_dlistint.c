#include "lists.h"
/* task zero */

/**
 * print_dlistint - prints all the elements of a list
 * @h: head of a list
 * Return: numbers of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
