#include "main.h"

int check_palindrome(char *s);

/**
 * is_palindrome - check if string is palindrome
 * @s: String to be checked
 * Return: integer value
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s));
}

/**
 * check_palindrome - check if string is palindrome
 * @s: String value to be checked
 * Return: integer value
 */

int check_palindrome(char *s)
{
	int i = _strlen_recursion(s) - 1;

	if (*s == s[i])
	{
		s++;
		i--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
 * _strlen_recursion - check length of string
 * @s: String to be checked
 * Return: String length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
