#include <stdlib.h>
#include "dog.h"
/* last task */

/**
 * free_dog - The dog to be free
 * @d: dog structure
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
