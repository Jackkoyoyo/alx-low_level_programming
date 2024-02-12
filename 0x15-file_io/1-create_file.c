#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: text to add to file
 *
 * Return: 1 on success
 * -1 if any operation failed or filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int frd, lent;
	ssize_t writeb;
	mode_t print = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	frd = creat(filename, print);
	if (frd == -1)
		return (-1);

	if (text_content != NULL)
	{
		lent = strlen(text_content);
		if (lent > 0)
		{
			writeb = write(frd, text_content, lent);
			if (writeb == -1)
			{
				close(frd);
				return (-1);
			}
		}
	}
	close(frd);
	return (1);
}
