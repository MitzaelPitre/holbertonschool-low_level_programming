#include <stdlib.h>
#include "dog_h"
/* task four */

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - function that create a new dog
 * @name: The name of the new dog
 * @age: The age of the new dog
 * @owner: The owner of the new dog
 *
 * Return: nothing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *big_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		big_dog = malloc(sizeof(dog_t));

		if (big_dog == NULL)
			return (NULL);

		big_dog->name = malloc(sizeof(char) * name_l);

		if (big_dog->name == NULL)
		{
			free(big_dog);
			return (NULL);
		}

		big_dog->owner = malloc(sizeof(char) * own_l);

		if (big_dog->owner == NULL)
		{
			free(big_dog->name);
			free(big_dog);
			return (NULL);
		}

		big_dog->name = _strcpy(big_dog->name, name);
		big_dog->owner = _strcpy(bid_dog->owner, owner);
		big_dog->age = age;
	}

	return (big_dog);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - Copy a string
 * @dest: destination value
 * @src: source value
 *
 * Return: the pointer to dest
 */

Char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
