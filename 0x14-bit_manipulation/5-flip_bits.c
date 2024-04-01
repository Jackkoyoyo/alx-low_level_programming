#include "main.h"

/**
 * flip_bits - returns the number of bits need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long xor = n ^ m;
	unsigned int read = 0;

	while (xor)
	{
		read += xor & 1;
		xor >>= 1;
	}

	return (read);
}
