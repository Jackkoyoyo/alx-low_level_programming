#include "main.h"

/**
 * _strncat - concatenates n bytes from string dest to src
 * @dest: the string to concatenate to
 * @src: the string to concatenate from
 * @n: the number of bytes to get from src
 * Return: the final result in dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int leng = 0, sec = 0;

	while (dest[leng] != '\0')
		leng++;

	while (src[sec] != '\0' && sec < n)
		dest[leng++] = src[sec++];

	dest[leng] = '\0';

	return (dest);
}
