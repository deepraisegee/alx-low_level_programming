#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
  * read_textfile - reads a text file and prints
  * it to the POSIX standard output.
  * @filename: name of the file
  * @letters: number of charater to read from the file
  *
  * Return: he actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t r, w;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(size_t) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		return (0);
	}

	if (r != w)
		return (0);

	return (r);
}
