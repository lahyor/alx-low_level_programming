#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_bit - Gets the value of a bit at a given index
  * @n: The number to find the index
  * @index: The index to find
  * Return: ...
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int insert = 0;

	while (n)
	{
		if (insert == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		insert++;
	}

	if (index > insert && index < 63)
		return (0);

	return (-1);
}
