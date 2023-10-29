#include "main.h"
#include <stdio.h>
/* task six */

/**
 * puts2 - prints every other character of a string.
 * @str: the string to be treated
 * Return: void
 */

void puts2(char *str)
{
	int m;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	for (m = 0; m < l; m += 2)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
