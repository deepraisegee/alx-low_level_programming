#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
  * create_file - creates a file.
  * @filename: name of the file.
  * @text_content: content of the file
  *
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
