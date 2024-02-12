#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters: number of letters to read
 *
 * Return: number of letters actually read
 * 0 if the file can't be opened of read or filename is NULL
 * or if write fails or didn't write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readb, writeb;
	int frd;
	char *bufferr;

	if (filename == NULL || letters == 0)
		return (0);

	frd = open(filename, O_RDONLY);
	if (frd == -1)
		return (0);

	bufferr = malloc(letters);
	if (bufferr == NULL)
		return (0);

	readb = read(frd, bufferr, letters);
	if (readb == -1)
	{
		free(bufferr);
		return (0);
	}
	close(frd);

	writeb = write(STDOUT_FILENO, bufferr, readb);
	if (writeb == -1 || writeb != readb)
	{
		free(bufferr);
		return (0);
	}

	free(bufferr);
	return (writeb);
}
