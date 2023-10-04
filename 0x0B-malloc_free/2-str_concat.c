#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: the two string concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[y])
		y++;

	l = x + y;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	y = 0;

	while (z < l)
	{
		if (z <= x)
			s[z] = s1[z];

		if (z >= x)
		{
			s[z] = s2[y];
			y++;
		}

		z++;
	}

	s[z] = '\0';
	return (s);
}
