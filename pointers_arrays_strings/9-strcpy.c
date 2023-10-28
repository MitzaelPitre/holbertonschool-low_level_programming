#include "main.h"
/* task nine */

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: source value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int m;

	for (m = 0; src[m] != '\0'; m++)
	{
	dest[m] = src[m];
	}
	dest[m++] = '\0';
	return (dest);
}
