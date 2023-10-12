#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *seperator, va_list args);
void print_integer(char *seperator, va_list args);
void print_float(char *seperator, va_list args);
void print_char_ptr(char *seperator, va_list args);

/**
 * struct format_types - struct format types
 * @identifier: conversion specifier
 * @f: function pointer
 */

typedef struct format_types
{
	char *identifier;
	void (*f)(char *seperator, va_list args);
} f_dt;
#endif
