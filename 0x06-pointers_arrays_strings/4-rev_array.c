#include "main.h"
#include <stdio.h>

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: An array of integers
  * @n: Number of elements to swap
  * Return: empty
  */

void reverse_array(int *a, int n)
{
	int *x, i, var, k;

	x = a;

	for (i = 1; i < n; i++)
	{
		x++;
	}

	for (k = 0; k < i / 2; k++)
	{
		var = a[k];
		a[k] = *x;
		*x = var;
		x--;
	}
}
