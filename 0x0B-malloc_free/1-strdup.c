#include "main.h"

/**
 * _strdup - Duplicates a string
 * @str: The string to be duplicated
 * Return: Pointer to duplicated string
 */
char *_strdup(char *str)
{
	unsigned int d = 0, len = 0;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup_str = malloc(len + 1);

	if (!dup_str)
		return (NULL);

	for (; str[d]; d++)
		dup_str[d] = str[d];

	dup_str[d] = '\0';

	return (dup_str);
}
