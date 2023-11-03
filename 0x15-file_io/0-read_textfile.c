#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename (pointer of string)
 * @letters: numbers of letters printed
 * Return: numbers of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char *) * letters);

	if (buff == NULL)
		return (0);

	nread = read(fd, buff, letters);
	nwrite = write(STDOUT_FILENO, buff, nread);

	free(buff);
	close(fd);

	return (nread);
}
