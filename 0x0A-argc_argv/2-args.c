#include <stdio.h> 
/**
* main - prints all arguments it receives, one per line
* @argc: number of commandline arguments
* @argv: list of commandline arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int name;

	for (name = 0; name < argc; name++)
		printf("%s\n", argv[name]);

	return (0);
}
