#include "main.h"

/**
 * print_alphabet - print lowercase alphabets
 * Return: viod
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	for (alpha = 'a'; alpha <= 'z'; alpha++)

		_putchar(alpha);

	_putchar('\n');
}
