#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters
 * @n: variable arguments count
 *
 * Return: sum of all variable arguments
 * 0 if n is zero
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int me = 0;
	int us = 0;
	va_list add;

	if (n > 0)
	{
		va_start(add, n);

		while (me < n)
		{
			us += va_arg(add, int);
			me++;
		}
		va_end(add);
	}
	return (us);
}
