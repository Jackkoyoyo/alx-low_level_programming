#include "main.h"
/**
  *print_most_numbers - print numbers
  * Return: No return
  */

void print_most_numbers(void)
{
	char numb = '0';

	for (numb = '0'; numb <= '9'; numb++)
	{
		if (numb != '2' && numb != '4')
			_putchar(numb);
	}
	_putchar('\n');
}
