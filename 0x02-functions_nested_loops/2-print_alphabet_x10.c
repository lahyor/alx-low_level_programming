#include "main.h"

/**
 * print_alphabet_x10 - Make the alphabet 10x
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int z = 1;

	while (z <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		z++;
	}
}
