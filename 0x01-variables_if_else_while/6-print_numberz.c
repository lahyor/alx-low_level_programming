#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints out single digits without using char or printf
 * Return: Always (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
