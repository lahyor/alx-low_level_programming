#include <stdlib.h>
#include "main.h"

int count_word(char *s);
char **strtow(char *str);

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int fog, x, y;

	fog = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			fog = 0;
		else if (fog == 0)
		{
			fog = 1;
			y++;
		}
	}

	return (y);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: Splited string into words
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, x = 0, start, end;

	while (*(str + len))
		len++;

	words = count_word(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (x)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (x + 1));

				if (tmp == NULL)
					return (NULL);

				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - x;
				k++;
				x = 0;
			}
		}
		else if (x++ == 0)
			start = i;
	}

	matrix[k] = NULL;
	return (matrix);
}
