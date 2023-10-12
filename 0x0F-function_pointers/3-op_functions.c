#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - the addition operator
 * @a: first number
 * @b: second number
 * Return: Addition of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the subtraction operator
 * @a: first number
 * @b: second number
 * Return: Subtraction of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the multiplication operator
 * @a: first number
 * @b: second number
 * Return: multiplication of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division operator
 * @a: first number
 * @b: second number
 * Return: division of two numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - the mod operator
 * @a: first number
 * @b: second number
 * Return: mod of two numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
