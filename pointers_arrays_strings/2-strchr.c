#include "main.h"
#include <stdio.h>
/* task two */

/**
 * _strchr - locate a character in a string.
 * @s: input
 * @c: input
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
