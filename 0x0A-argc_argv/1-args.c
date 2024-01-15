#include <stdio.h>

/**
* main - prints the name of the user
* @argc: number of commandline arguments
* @argv: list of commandline arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
