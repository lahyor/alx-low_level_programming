#include "main.h"

/**
 * rev_string - reverses a string
 * @s: String to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int max = 0, index = 0;
	char lex;

	while (s[index++])
		max++;

	for (index = max - 1; index >= max / 2; index--)
	{
		lex = s[index];
		s[index] = s[max - index - 1];
		s[max - index - 1] = lex;
	}
}
