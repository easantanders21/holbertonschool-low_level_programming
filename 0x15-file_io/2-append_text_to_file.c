#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * append_text_to_file - this function create a file
 * @filename: file name
 * @text_content: text content in file
 *
 * Return: 1 on succes or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, testw, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
