#include "main.h"
#include <stdio.h>
/* task three */

/**
 * _puts - prints a string.
 * @str: the string to print
 * Return: void
 */

void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			putchar(*str);
			str++;
		}
	}
	putchar('\n');
}
