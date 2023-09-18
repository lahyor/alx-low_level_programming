#include <stdio.h>

/**
 * _strlen - returns the ldngth of a string
 * @str: String to be counted
 * Return: String length
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
