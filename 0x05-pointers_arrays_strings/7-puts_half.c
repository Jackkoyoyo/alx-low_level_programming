#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the given string
 */

void puts_half(char *str)
{
	int j = 1;

	while (str[j - 1])
		j++;

	j /= 2;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
