#include "main.h"

/**
  * _isupper - Function that check for uppercase
  * @c: value to be checked
  * Return: 1 if uppercase else 0
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	return (0);
}
