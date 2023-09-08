#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints program in both lower and upper cases
 * Return: Always (Success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
