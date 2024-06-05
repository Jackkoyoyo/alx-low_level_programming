#include "main.h"
/**
 * print_last_digit - prints last digit
 * @num: int num should be trim
 * Return: int digit
 */

int print_last_digit(int num)
{
	int last_d = 1;

	if (num < 0)
		last_d *= -1;

	last_d *= num % 10;
	_putchar(last_d + 48);

	return (last_d);
}
