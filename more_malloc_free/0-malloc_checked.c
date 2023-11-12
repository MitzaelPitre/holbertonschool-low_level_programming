#include "main.h"
/* first task */

/**
 * malloc_checked - cause normal process termination with a status value of 98
 * @b: the size to allocate
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
