#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	int i;
	char *s;

	i = 1;
	s = (char *)&i;
	return (*s);
}
