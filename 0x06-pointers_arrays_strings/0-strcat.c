#include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int var1 = 0, i;

	while (dest[var1])
	{
		var1++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[var1] = src[i];
		var1++;
	}

	dest[var1] = '\0';
	return (dest);
}
