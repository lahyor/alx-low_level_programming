#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: minimum array of integers
 * @max: maximum array of integers
 * Return: Pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *s, x = 0;

	if (min > max)
		return (NULL);

	s = malloc((sizeof(int) * (max - min)) + sizeof(int));

if (s == NULL)
return (NULL);

while (min <= max)
{
	s[x] = min;
	x++;
	min++;
}

return (s);
}
