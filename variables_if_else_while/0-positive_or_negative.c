#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Positive or negative
 *
 * Return: always 0
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if (n > 0)
			printf("%d", n);
		else if (n == 0)
			printf("%d", n);
		else
			printf("%d", n);
		return (0);
}
