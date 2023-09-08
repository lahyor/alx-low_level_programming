#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all combinations for three digits
 * Return: Always (Success);
 */

int main(void)
{
	int i, d, p;

	for (i = '0'; i < '9'; i++)
	{
		for (d = i + 1; d <= '9'; d++)
		{
			for (p = d + 1; p <= '9'; p++)
			{
				if ((d != i) != p)
				{
					putchar(i);
					putchar(d);
					putchar(p);
					if (i == '7' && d == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
