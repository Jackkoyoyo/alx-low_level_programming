#include <stdio.h>

/**
  *main - entry point
  *
  *Return: Alawys 0 (success)
  */

int main(void)
{
	char alpha;

	char caps;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

		putchar(alpha);

	for (caps = 'A'; caps <= 'Z'; caps++)

		putchar(caps);


	putchar('\n');

	return (0);
}
