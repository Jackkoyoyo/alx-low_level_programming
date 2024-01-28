#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be prtinted between strings
 * @n: variable arguments count
 *
 * Return: void always
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prin;
	unsigned int me = 0;
	char *str;

	if (n > 0)
	{
		va_start(prin, n);
		while (me < n)
		{
			str = va_arg(prin, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			if (separator != NULL && me != n - 1)
				printf("%s", separator);
			me++;
		}
		va_end(prin);
	}
		putchar('\n');
}
