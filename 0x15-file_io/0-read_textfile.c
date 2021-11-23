#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - read text file
 * @filename: file name
 * @letters: number of letters to print
 *
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, testw;
	char *buffer;
	ssize_t nr_bytes;

	if (filename == NULL)
		return (0);

	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	nr_bytes = read(fd, buffer, letters);
	testw = write(1, buffer, letters);

	if (testw == -1)
		return (0);

	close(fd);
	free(buffer);
	return (nr_bytes);
}
