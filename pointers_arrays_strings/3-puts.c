#include "main.h"
#include <stdio.h>
/* task three */

/**
 * _puts - prints a string.
 * @str: the string to print
 * Return: 0 if successfull
 */

void _puts(char *str)
{
	if (str != NULL)
	{
		puts(str);
	}
	putchar('\n');
}
