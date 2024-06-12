#include "main.h"
/**
  *more_numbers - print numbers
  * Return: No return
  */

void more_numbers(void)
{
	int numb, count;

	for (numb = 0; numb < 10; numb++)
	{
		for (count = 0; count < 15; count++)
		{
			if (count >= 10)
				_putchar(count / 10 + '0');
			_putchar(count % 10 + '0');
		}
		_putchar('\n');
	}
}
