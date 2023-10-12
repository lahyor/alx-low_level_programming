#include "main.h"

/**
 * array_iterator - executes a function given
 * @array: the array of the function executed
 * @size: size of the array
 * @action: the function to pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (c < size)
		{
			action(array[c]);
			c++;
		}
	}
}
