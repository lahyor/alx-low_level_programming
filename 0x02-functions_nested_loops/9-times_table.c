#include "main.h"

/**
 * times_table - Prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int a, b, c, n, p;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				n = c % 10;
				p = (c - n) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(p + '0');
				_putchar(n + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(32);
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
