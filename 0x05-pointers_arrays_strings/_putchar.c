#include "main.h"
/**
  *_putchar - prints characters to stdout
  *@c: holds characters to be printed out
  *
  * Returns: characters written
  */

int _putchar(int c)
{
	int pchar = write(STDOUT_FILENO, &c, 1);
	return (pchar);
}
