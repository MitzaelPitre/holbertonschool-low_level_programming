#include "main.h"
#include <stdio.h>
/* task seven */

/**
 * puts_half - prints half of a string
 * @str: the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int m = 0;
	int l;

	while (str[m] != '\0')
	{
		m++;
	}
	if (m % 2 == 1)
	{
		l = (m - 1) / 2;
		l += 1;
	}
	else
	{
		l = m / 2;
	}

	for (; l < m; l++)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
