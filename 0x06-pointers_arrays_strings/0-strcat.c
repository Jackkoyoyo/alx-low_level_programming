#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: the first string
 * @src: the second string
 * Return: concatenated string which is dest
 */
char *_strcat(char *dest, char *src)
{

	int leng = 0, sec = 0;

	while (dest[leng] != '\0')
		leng++;

	for (; src[sec] != '\0'; sec++, leng++)
		dest[leng] = src[sec];

	dest[leng] = '\0';

	return (dest);
}
