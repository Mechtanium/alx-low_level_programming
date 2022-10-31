#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Read and write
 * @filename: char * file path
 * @letters: number of characters to retrieve.
 *
 * Description: Monkey see, monkey do.
 * Return: number of character written.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf = malloc(sizeof(char) * (letters + 1));

	if (filename == NULL)
	{
		free(buf);
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	r = read(fd, buf, letters);

	if (r == -1)
	{
		free(buf);
		return (0);
	}

	buf[r] = '\0';
	w = write(1, buf, r);

	if (w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return ((ssize_t) w);
}

