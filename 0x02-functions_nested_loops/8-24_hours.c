#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of jack bauer
 * Return: ...
 */

void jack_bauer(void)
{
	int p, q, r, s;

	for (p = 0; p <= 2; p++)
	{
		for (q = 0; q <= 9; q++)
		{
			if ((p <= 1 && q <= 9) || (p <= 2 && q <= 3))
			{
				for (r = 0; r <= 5; r++)
				{
					for (s = 0; s <= 9; s++)
						_putchar(p + '0');
					_putchar(q + '0');
					_putchar(58);
					_putchar(r + '0');
					_putchar(s + '0');
					_putchar('\n');
				}
			}
		}
	}
}
