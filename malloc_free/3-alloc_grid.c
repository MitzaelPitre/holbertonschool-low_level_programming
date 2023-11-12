#include "main.h"
#include <stdlib.h>
/* task three */

/**
 * alloc_grid - return a pointer to a dimensional array
 * @width: number of columns
 * @height: number of columns
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || heigth <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; 1 < width; l++)
		{
			a[k][l] = 0;
		}
	}

	return (a);
}
