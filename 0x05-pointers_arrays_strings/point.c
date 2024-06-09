#include "main.h"
#include <stdio.h>

/**
  *void reset_to_98 - Resets the value of an integer
  *@n - A pointer to an integer 
  *Return : 0
  */

void reset_to_98(int *n)
{
	int t = 30;

	n = t;
	printf("value of %d\n", &n);

	return (0);
}
