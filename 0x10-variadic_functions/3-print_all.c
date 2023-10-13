#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: conversion specifier to print
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_char },
		{ "i", print_integer },
		{ "f", print_float },
		{ "s", print_char_ptr }
	};
	unsigned int x = 0;
	unsigned int y = 0;
	char *seperator = "";

	va_start(args, format);

	while (format != NULL && format[x])
	{
		y = 0;

		while (y < 4)
		{
			if (format[x] == *form_types[y].identifier)
			{
				form_types[y].f(seperator, args);
				seperator = ", ";
			}
			y++;
		}
		x++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_char - print character of char type
 * @seperator: character to be printed
 * @args: list of variadic arguments
 * Return: void
 */

void print_char(char *seperator, va_list args)
{
	printf("%s%c", seperator, va_arg(args, int));
}

/**
 * print_integer - print character of integer type
 * @seperator: integer to be printed
 * @args: list of variadic argument
 * Return: void
 */

void print_integer(char *seperator, va_list args)
{
	printf("%s%i", seperator, va_arg(args, int));
}

/**
 * print_float - print the cahracter of float type
 * @seperator: float type to be printed
 * @args: lists of variadic argument
 * Return: void
 */

void print_float(char *seperator, va_list args)
{
	printf("%s%f", seperator, va_arg(args, double));
}

/**
 * print_char_ptr - print character pointer
 * @seperator: character pointer to be printed
 * @args: list of variadic arguments
 * Return: void
 */

void print_char_ptr(char *seperator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", seperator, "(nil)");
		return;
	}

	printf("%s%s", seperator, arg);
}
