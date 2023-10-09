#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - it concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: size of string
 * Return: pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, z = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[z])
		z++;

	if (n >= z)
		l = x + z;
	else
		l = x + n;

	s = malloc(sizeof(char) * 1 + 1);

	if (s == NULL)
		return (NULL);

	z = 0;

	while (y < l)
	{
		if (y <= x)
			s[y] = s1[y];

		if (y >= x)
		{
			s[y] = s2[z];
			z++;
		}
		y++;
	}
		s[y] = '\0';
		return (s);
}
