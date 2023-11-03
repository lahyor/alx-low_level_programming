#include "main.h"

/**
 * create_file - functions that creates a file
 * @filename: filename (string pointer)
 * @text_content: text content to be copied into the file
 * Return: 1 if its successful and -1 if failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int rletters;
	int rwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (rletters = 0; text_content[rletters]; rletters++)
		;
	rwrite = write(fd, text_content, rletters);

	if (rwrite == -1)
		return (-1);

	close(fd);
	return (1);
}
