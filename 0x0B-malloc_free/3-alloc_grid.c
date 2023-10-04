#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: arrays of integers
 */

int **alloc_grid(int width, int height)
{
	int x, y, z, l;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		s[x] = malloc(sizeof(int) * width);

		if (s[x] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(s[y]);
			}

			free(s);
			return (NULL);
		}
	}

	for (z = 0; z < height; z++)
	{
		for (l = 0; l < width; l++)
		{
			s[z][l] = 0;
		}
	}

	return (s);
}
