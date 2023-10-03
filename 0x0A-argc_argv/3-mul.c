#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0(Success)
 */

int main(int argc, char *argv[])
{
	int s1 = 0, s2 = 0;

	if (argc == 3)
	{
		s1 = atoi(argv[1]);
		s2 = atoi(argv[2]);
		printf("%d\n", s1 * s2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
