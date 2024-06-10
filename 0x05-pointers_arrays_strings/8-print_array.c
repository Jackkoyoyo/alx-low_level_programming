#include "main.h"

/**
 * print_array - prints all elements of an array of integers
 * @a: the array
 * @n: the length of the array
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j == n - 1)
		{
			printf("%d", a[j]);
			break;
		}
		printf("%d, ", a[j]);
	}
	putchar('\n');
}
