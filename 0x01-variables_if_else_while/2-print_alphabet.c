#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print out alphabets in lowercase
 * Return: Always (Success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
