#include <stdio.h>
/**
 * print_to_98 - print to 98
 * @n: int start point to 98
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n < 98)
			n++;
		if (n > 98)
			n--;
	}
	printf("%d\n", n);
}
