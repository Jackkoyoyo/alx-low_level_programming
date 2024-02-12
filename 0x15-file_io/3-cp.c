#include "main.h"
#include <stdio.h>

#ifndef BUFSIZE
#define BUFSIZE 1024
#endif

/**
 * srcerr - prints source file error and exits
 * @filename: source file name
 *
 * Return: void always
 */

void srcerr(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * desterr - prints error for destination file and exits
 * @filename: destination file name
 *
 * Return: void always
 */

void desterr(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * closerr - prints error for closing file descriptor and exits
 * @frd: file descriptor
 *
 * Return: void always
 */

void closerr(int frd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d", frd);
	exit(100);
}

/**
 * main - copies the content of a file to another file
 * @ac: arguments count
 * @av: arguments values
 *
 * Return: void always
 */


int main(int ac, char **av)
{
	int srcfd, destfd;
	char bufferr[BUFSIZE];
	ssize_t readb, writeb;
	int destflags = O_WRONLY | O_APPEND | O_CREAT | O_TRUNC;
	mode_t print = S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	srcfd = open(av[1], O_RDONLY);
	if (srcfd == -1)
		srcerr(av[1]);

	destfd = open(av[2], destflags, print);
	if (destfd == -1)
		desterr(av[2]);

	while ((readb = read(srcfd, bufferr, BUFSIZE)) > 0)
	{
		writeb = write(destfd, bufferr, readb);
		if (writeb == -1)
			desterr(av[2]);
	}
	if (readb == -1)
		srcerr(av[1]);

	if (close(srcfd) == -1)
		closerr(srcfd);

	if (close(destfd) == -1)
		closerr(destfd);

	return (0);
}
