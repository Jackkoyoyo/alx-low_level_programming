#include "main.h"
/**
 * swap_int - swaps the value of two ints
 * @a: pointer to integer
 * @b: pointer to integer
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int sing;

	sing = *b;
	*b = *a;
	*a = sing;
}
