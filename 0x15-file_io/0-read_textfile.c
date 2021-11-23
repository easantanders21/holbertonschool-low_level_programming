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
	int fd;
	char *buffer;
	int nr_bytes, testw;

	if (filename == NULL)
		return (0);
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	nr_bytes = read(fd, buffer, letters);
	if (nr_bytes == -1)
	{
		close(fd);
		return (0);
	}
	buffer[nr_bytes] = '\0';
	testw = write(1, buffer, nr_bytes);
	if (testw == -1)
	{
		close(fd);
		return (0);
	}
	if (nr_bytes != testw)
	{
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	return (testw);
}
