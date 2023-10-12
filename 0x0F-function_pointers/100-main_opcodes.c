#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its main function
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0(Success)
 */

int main(int argc, char *argv[])
{
	int bytes, int index;
	int (*addr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)addr;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;
		printf(" ");

		addr++;
	}
	printf("\n");

	return (0);
}
