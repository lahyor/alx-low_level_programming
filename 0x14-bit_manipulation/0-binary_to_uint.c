#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * @b: The binary string to convertes
  * Return: The positive number converted from a binary
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int muse = 0, cnt = 0, add = 0;

	if (b == NULL)
		return (0);

	muse = _strlen(b);
	while (muse--)
	{
		if (b[muse] != 48 && b[muse] != 49)
			return (0);

		if (b[muse] == 49)
			add += 1 << cnt;

		cnt++;
	}

	return (add);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  * Return: String length
  */

int _strlen(const char *s)
{
	int l = 0;

	while (s[l])
		l++;

	return (l);
}
