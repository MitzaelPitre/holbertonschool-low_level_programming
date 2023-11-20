#include "variadic_funcrions.h"

/**
 * sum_them_all - Return the sum of all its parameters
 * @n: The number of parameters passed to the function
 * Return: if n == 0 - 0.
 * otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
