#include "main.h"

/**
 * int_index - it searches for an integer
 * @array: array of the integer
 * @size: size of the integer
 * @cmp: function to pointer
 * Return: integer value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (c < size)
			{
				if (cmp(array[c]))
					return (c);
				c++;
			}
		}
	}
	return (-1);
}
