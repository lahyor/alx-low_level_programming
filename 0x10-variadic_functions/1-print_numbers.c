#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @seperator: string to be printed between numbers
 * @n: number of integers
 * Return: Always 0
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1 && seperator != NULL)
				printf("%s", seperator);
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
