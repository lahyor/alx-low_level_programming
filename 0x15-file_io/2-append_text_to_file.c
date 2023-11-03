#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append text to
 * @text_content: content to be appended
 * Return: 1 if successful and -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int rletters;
	int rwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (rletters = 0; text_content[rletters]; rletters++)
			;

		rwrite = write(fd, text_content, rletters);
		if (rwrite == -1)
			return (-1);
	}
	close(fd);
	return (1);
