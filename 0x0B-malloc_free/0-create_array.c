#include "main.h"

/**
 * create_array - creates an array of chars, and initializes with a char
 * @size: size of the array to be allocated
 * @c: character to initialize the array 
 * Return: pointer to the array, NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int r = 0;
	char *aq = malloc(sizeof(char) * size);

	if (!aq || !size)
		return (NULL);

	while (r < size)
		aq[r++] = c;

	return (aq);
}
