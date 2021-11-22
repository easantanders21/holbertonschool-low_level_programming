#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
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
	FILE *fp;
	int i = 0, revw;

	fp = fopen(filename, "w");

	if (filename == NULL || fp == NULL)
		return (-1);

	chmod(filename, 0600);

	while (*(text_content + i))
	{
		revw = fputc(text_content[i], fp);
		if (revw == EOF)
			return (-1);
		i++;
	}
	return (1);
}
