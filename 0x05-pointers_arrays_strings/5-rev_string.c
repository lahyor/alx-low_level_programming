#include "main.h"

/**
 * rev_string - reverses a string
 * @s: String to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int x, y, z;
	char *c, main;

	c = s;

	while (s[y] != '\0')
	{
		y++;
	}

	for (z = 1; z < y; z++)
	{
		c++;
	}

	for (x = 0; x < (y / 2); x++)
	{
		main = s[x];
		s[x] = *c;
		*c = main;
		c--;
	}
}
