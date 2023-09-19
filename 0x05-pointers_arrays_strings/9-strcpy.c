#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	dest[j++] = '\0';

	return (dest);
}
