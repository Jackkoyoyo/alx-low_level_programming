#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - entry point
  *
  *Return: Alawys 0 (success)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int pn;

	pn = n % 10;

	if (pn != 0 && pn < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, pn);
	else if (pn > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, pn);
	else
		printf("Last digit of %d is %d and is 0\n", n, pn);
	return (0);
}
