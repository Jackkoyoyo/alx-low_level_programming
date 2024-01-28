#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: variable arguments count
 *
 * Return: void always
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prin;
	unsigned int me = 0;

	if (n > 0)
	{
		va_start(prin, n);
		while (me < n)
		{
			printf("%d", va_arg(prin, int));
			if (separator != NULL && me != n - 1)
				printf("%s", separator);
			me++;
		}
		va_end(prin);
	}
		printf("\n");
}
