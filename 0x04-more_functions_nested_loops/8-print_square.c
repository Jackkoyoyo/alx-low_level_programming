#include "main.h"

/**
 * print_square - prints # n times.
 * @size: times straight # is printed.
 * Return: no return.
 */
void print_square(int size)
{
	int ha, squ;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (ha = 0; ha < size; ha++)
	{
		for (squ = 0; squ < size; squ++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
