#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/** struct format - Struct for format specifier
 * @char: specifier
 * @fp: data type pointer
 */
typedef struct format
{
	char spc;
	void (*fp)(void *);
} frmt;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*VARIADIC_FUNCTIONS_H*/
