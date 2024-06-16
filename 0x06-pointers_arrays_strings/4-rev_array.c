#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the array of integers
 * @n: the size of the array
 **/
void reverse_array(int *a, int n)
{
	int i = 0, p = n - 1, swap;

	for (; i < n / 2; i++, p--)
	{
		swap = a[i];
		a[i] = a[p];
		a[p] = swap;
	}
}
