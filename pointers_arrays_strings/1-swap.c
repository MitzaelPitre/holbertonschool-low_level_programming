#include "main.h"
#include <stdio.h>
/* task one */

/**
 * swap_int - swaps the values of two integers
 * @a: the first int to be swap.
 * @b: the second int to be swap
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
