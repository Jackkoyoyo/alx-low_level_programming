#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int numb, mult, result;

	for (numb = 0; numb <= 9; numb++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			result = numb * mult;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
