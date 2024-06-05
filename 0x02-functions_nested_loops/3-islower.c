#include "main.h"

/**
 * _islower - check lowercase alphabets
 * @c: the char that will be checked
 * Return:  1 to lowercases , 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
