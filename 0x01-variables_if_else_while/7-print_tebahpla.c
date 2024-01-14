#include <stdio.h>

/**
  * main - entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	char re = 'z';

	while (re >= 'a')
	{
		putchar(re);
		re--;
	}

	putchar('\n');
	return (0);
}
