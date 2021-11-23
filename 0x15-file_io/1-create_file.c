#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_file - this function create a file
 * @filename: file name
 * @text_content: text content in file
 *
 * Return: 1 on succes or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, testw;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (text_content == NULL)
		return (1);

	if (fd == -1)
		return (-1);

	while (*(text_content + i))
	{
		i++;
	}

	testw = write(fd, text_content, i);

	if (testw == -1)
		return (-1);

	close(fd);
	return (1);

}
