#include "main.h"
#include <stdio.h>
/* Task number four */

/**
 * print_most_numbers - The numbers from 0 to 9
 * Descriptions: Prints the numbers exluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_pucthar(x + '0');
		}
	}
	_pucthar('\n');
}
