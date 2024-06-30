#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: pointer to the new string, NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *con_str;
	int r = 0, j = 0, len_s1 = 0, len_s2 = 0;

	(s1 == NULL) && (s1 = "");
	(s2 == NULL) && (s2 = "");

	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;

	con_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (con_str == NULL)
		return (NULL);

	for (; r < len_s1; r++)
		con_str[r] = s1[r];
	for (; j < len_s2; j++, r++)
		con_str[r] = s2[j];

	con_str[r] = '\0';

	return (con_str);
}
