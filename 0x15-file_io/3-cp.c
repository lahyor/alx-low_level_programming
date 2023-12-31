#include "main.h"
#include <stdio.h>

/**
  * main - Entry point
  * @argc: The argument count
  * @argv: The argument vector
  * Return: ...
  */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t rchar, nwrite;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	rchar = 1024;
	while (rchar == 1024)
	{
		rchar = read(file_from, buff, 1024);
		if (rchar == -1)
			error_file(-1, 0, argv);
		nwrite = write(file_to, buff, rchar);
		if (nwrite == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}

/**
 * error_file - handle errors and check if file is opened
 * @file_from: initial file to copy from and check
 * @file_to: destination file to copy to
 * @argv: argument vector
 * Return: nothing
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
