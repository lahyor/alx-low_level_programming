#include "main.h"

/**
 * _atoi - converta string to an integer
 * @s: pointer to be converted
 * Return: An integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int ni = 0;
	int man = 1;
	int imi = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			man *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			imi = 1;
			ni = (ni * 10) + (s[i] - '0');
			i++;
		}
		if (imi == 1)
		{
			break;
		}
		i++;
	}
	ni *= man;
	return (ni);
}
