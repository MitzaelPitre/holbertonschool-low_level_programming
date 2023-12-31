#include "main.h"
/* task two */

/**
 * _strlen_recursion - return the length of a string
 * @s: pointer to string.
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
