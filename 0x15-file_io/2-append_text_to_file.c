#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append to file
 *
 * Return: 1 on success
 * -1 if any task failed or filename is NULL
 *  or file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int frd, lent;
	int flags = O_WRONLY | O_APPEND;

	if (filename == NULL)
		return (-1);

	frd = open(filename, flags);
	if (frd == -1)
		return (-1);

	if (text_content != NULL)
	{
		lent = strlen(text_content);
		if (lent > 0 && write(frd, text_content, lent) == -1)
		{
			close(frd);
			return (-1);
		}
	}

	close(frd);
	return (1);
}
