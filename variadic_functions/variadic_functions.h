#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_a_char(va_list args);
void print_an_int(va_list args);
void print_a_float(va_list args);
void print_a_str(va_list args);

/**
 * Description: 
 */

typedef struct types
{
	char *identifier;
	void (*f)(va_list args);
} types;

#endif
