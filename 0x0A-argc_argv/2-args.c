#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it received
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0(Success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
