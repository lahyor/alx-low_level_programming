#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @seperator: strings to be printed between string
 * @n: number of strings passed
 * Return: Always 0
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);

			if (i != n - 1 && seperator != NULL)
				printf("%s", seperator);
			i++;
		}

		va_end(args);
	}
	printf("\n");
}
