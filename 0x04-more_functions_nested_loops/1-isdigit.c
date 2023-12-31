#include "main.h"

/**
 * _isdigit - checks for digit 0 through 9
 * @c: Character needs to be checked
 * Return: 1 if digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
