#include <stdlib.h>
#include "main.h"

/**
  * flip_bits -  flip to get from one number to another.
  * @n: first integer
  * @m: second integer
  * Return:  returns the number of bits you would need
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mode = 0, love = 0;

	mode = n ^ m;
	while (mode)
	{
		if (mode & 1)
			love++;

		mode >>= 1;
	}

	return (love);
}
