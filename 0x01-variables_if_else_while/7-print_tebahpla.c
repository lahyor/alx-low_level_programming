#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print out lowercase alphabets in reverse
 * Return: Always (Success)
 */

int main(void)
{
	char num;

	for (num = 'z'; num >= 'a'; num--)
		putchar(num);
	putchar('\n');
	return (0);
}
