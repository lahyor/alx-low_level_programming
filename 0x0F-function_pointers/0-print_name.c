#include "main.h"

/**
 * print_name - prints a name
 * @name: Name to be printed
 * @f: pointer to function
 * Return: Printed name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
