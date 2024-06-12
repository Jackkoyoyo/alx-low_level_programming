#include "main.h"
/**
  *print_numbers - print numbers
  * Return: No return
  */

void print_numbers(void)
{
	int numb = 0;

	for (numb = '0'; numb <= '9'; numb++)
		_putchar(numb);
	_putchar('\n');
}
