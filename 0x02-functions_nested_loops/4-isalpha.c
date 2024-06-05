#include "main.h"

/**
 * _isalpha - check lowercase alphabets
 * @c: the char that will be checked
 * Return:  1 to letters , 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
