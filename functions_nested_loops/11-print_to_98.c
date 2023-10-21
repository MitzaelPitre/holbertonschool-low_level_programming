#include "main.h"
#include <stdio.h>
/* Task Eleven */

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The number to start printing from
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
