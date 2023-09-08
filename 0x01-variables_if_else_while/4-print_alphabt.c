#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all alphabets in lowercase except q and e
 * Return: Always (Success)
 */

int main(void)
{
	char num, e, q;

	e = 'e';
	q = 'q';

	for (num = 'a'; num <= 'z'; num++)
	{
		if (num != e && num != q)
			putchar(num);
	}
	putchar('\n');
	return (0);
}
