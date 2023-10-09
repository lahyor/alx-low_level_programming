#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: Number of member of array
 * @size: Size of the array
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, l = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	s = malloc(1);

	if (s == NULL)
		return (NULL);

	while (x < l)
	{
		s[x] = 0;
		x++;
	}

	return (s);
}
