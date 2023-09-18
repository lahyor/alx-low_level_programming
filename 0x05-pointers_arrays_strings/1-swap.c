#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer to swap
 * @b: integer to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int main;

	main = *a;
	*a = *b;
	*b = main;
}
