#include "main.h"
#include <stdio.h>

/**
  * cap_string - capitalizes all words of a string
  * @s: string tha is to be checked
  * Return: char value
  */

char *cap_string(char *s)
{
	int a = 0, i;
	int caps  = 13;
	char spa[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < caps)
		{
			if ((a == 0 || s[a - 1] == spa[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
