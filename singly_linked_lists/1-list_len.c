#include "list.h"
/* task one */

/**
 * list_len - returns then number of elements in a list
 * @h: singly linked list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t list;

	list = 0;
	while (h != NULL)
	{
		h = h->next;
		list++;
	}
	return (list);
}
