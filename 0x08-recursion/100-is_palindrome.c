#include "main.h"

int compare_string(char *s, int left, int right);

/**
 * is_palindrome - check if string is palindrome
 * @s: String to be checked
 * Return: integer value
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s - 1)));
}

/**
 * compare_string - compare each character of the string
 * @s: String value to be compared
 * @left: smallest iterator
 * @right: largest iterator
 * Return: integer value
 */

int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}

/**
 * _strlen_recursion - check length of string
 * @s: String to be checked
 * Return: String length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
