#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - select the correct function to
 * perform the operation
 * @s: the function selected
 * Return: ...
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};
	int c = 0;

	while (c < 5)
	{
		if (strcmp(s, ops[c].op) == 0)
			return (ops[c].f);
		c++;
	}

	return (0);
}
