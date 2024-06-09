#include "main.h"
/**
 * _strlen - Check the length of a given string
 * @s: Pointer to the string
 * Return: length of string
 */

int _strlen(char *s)
{
	unsigned int lent = 0;

	while (s[lent])
		lent++;

	return (lent);
}
