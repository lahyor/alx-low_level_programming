#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: numbers
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int count = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}

		va_end(args);
		return (count);
	}
	return (0);
}
