#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the momory
 * @old_size: Is the size in bytes of the allocated space for ptr
 * @new_size: New sizes in bytes of the new memory block
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *sptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		sptr = malloc(new_size);

		if (sptr == NULL)
			return (NULL);

		return (sptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	sptr = malloc(new_size);

	if (sptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		sptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (sptr);
}
