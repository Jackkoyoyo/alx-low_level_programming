#include <stdio.h>

/**
  * main - entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	unsigned int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');
	return (0);
}
