#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a string
 * Return: Nothing
 */

void first(void)
{
	printf("You're the beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
