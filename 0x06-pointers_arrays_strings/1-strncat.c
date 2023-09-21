#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  * Return: A pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int var1 = 0, x = 0;

	while (dest[var1])
	{
		var1++;
	}

	while (x < n && src[x])
	{
		dest[var1] = src[x];
		var1++;
		x++;
	}

	dest[var1 + n + 1] = '\0';

	return (dest);
}
