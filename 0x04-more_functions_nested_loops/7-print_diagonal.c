#include "main.h"

/**
 * print_diagonal - draw a line n times long
 * @n: number of lines
 */
void print_diagonal(int n)
{
	int ha, dia;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (ha = 0; ha < n; ha++)
	{
		for (dia = 0; dia < ha; dia++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
