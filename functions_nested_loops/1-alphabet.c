#include "main.h"
/* Making task one */

/**
 * print_alphabet - make the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
