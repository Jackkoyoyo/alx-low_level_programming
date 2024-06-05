#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabets x10
 * Return: no return
 */

void print_alphabet_x10(void)
{
	int cn = 0;

	while (cn < 10)
	{
		char alpha = 'a';

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		cn++;
	}
}
