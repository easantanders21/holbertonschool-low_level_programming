#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - read text file
 * @ac: file name
 * @av: number of letters to print
 *
 * Return: the actual number of letters
 */
int main(int ac, char **av)
{
	int fd1, fd2;
	char buffer[1024];
	int nr_bytes, testw, testc1, testc2;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	nr_bytes = read(fd1, buffer, 1024);
	if (fd1 == -1 || nr_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR |
		S_IRGRP | S_IWGRP | S_IROTH);
	testw = write(fd2, buffer, nr_bytes);
	if (fd2 == -1 || testw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	testc1 = close(fd1);
	testc2 = close(fd2);
	if (testc1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (testc2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (1);
}
