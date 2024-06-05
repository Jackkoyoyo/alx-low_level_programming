
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @num: int num that will be checked
 * Return: 1 and print '+' when num > zero
 * 0 and print 0 when num is zero
 * -1 and print '-' when num < zero
 */

int print_sign(int num)
{
	if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
