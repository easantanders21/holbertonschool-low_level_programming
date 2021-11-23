#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif
/**
 * main - read text file
 * @ac: file name
 * @av: number of letters to print
 *
 * Return: the actual number of letters
 */
int main(int ac, char **av)
{
	int fdI, fdO;
	char buffer[BUF_SIZE];
	ssize_t numRead;

	if (ac != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	fdI = open(av[1], O_RDONLY);
	if (fdI == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98); }
	fdO = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR |
		S_IRGRP | S_IWGRP | S_IROTH);
	if (fdO == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }

	while ((numRead = read(fdI, buffer, BUF_SIZE)) > 0)
		if (write(fdO, buffer, numRead) != numRead)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }

	if (numRead == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }

	if (close(fdI) == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdI);
		exit(100); }
	if (close(fdO) == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdO);
		exit(100); }

	return (0);
}
