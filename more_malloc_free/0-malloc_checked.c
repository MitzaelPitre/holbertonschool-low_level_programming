#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* first task */

/**
 * malloc_checked - cause normal process termination with a status value of 98
 * @b: the size to allocate
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
