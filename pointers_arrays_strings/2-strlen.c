#include "main.h"
#include <stdio.h>
/* Task two */

/**
 * int_strlen - checking the length of a string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
