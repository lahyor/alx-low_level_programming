#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *  @c: The number to be checked
 *  Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
