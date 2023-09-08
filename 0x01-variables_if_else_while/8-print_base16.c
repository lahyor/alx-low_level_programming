#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print all numbers of base 16 in lowercase
 * Return: Always (Success)
 */

int main(void)
{
	int i;
	char num;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
