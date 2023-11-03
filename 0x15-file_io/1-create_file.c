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

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
		write = (fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}

/**
 * _strlen - length of string
 * @s: counted string
 * Return: string length
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
