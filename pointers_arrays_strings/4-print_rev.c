#include "main.h"
#include <stdio.h>
/* task number four */

/**
 * print_rev - print a string, in reverse.
 * @s: the string to get the reverse
 * Return: length
 */

void print_rev(char *s)
{
	if (s == NULL)
	{
		return;
	}
	
	int lenght = 0;

	while (s[length] != '0')
	{
		length++;
	}
	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
