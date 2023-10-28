#include "main.h"
#include <stdio.h>
/* task eight */

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: Number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
	printf("%d", a[m]);
	if (m != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
