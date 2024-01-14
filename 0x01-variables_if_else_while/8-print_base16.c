#include <stdio.h>

/**
  * main - entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	unsigned int hexanum = 48;
	char hexachar = 'a';

	while (hexanum <= 57)
	{
		putchar(hexanum);
		hexanum++;
	}

	while (hexachar <= 'f')
	{
		putchar(hexachar);
		hexachar++;
	}
	putchar('\n');
	return (0);
}
