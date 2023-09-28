#include "main.h"

/**
 * _strlen_recursion - length of a string
 * @s: String to count
 * Return: integer value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
