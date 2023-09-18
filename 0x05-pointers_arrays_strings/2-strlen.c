#include "main.h"

/**
 * _strlen - returns the ldngth of a string
 * @s: String to be counted
 * Return: String length
 */

void _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}
