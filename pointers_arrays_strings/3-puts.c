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
	for (; *str != '\0'; str++))
	{
		_putchar(*str);
	}
	_putchar('\n');
}
