#include <stdio.h>
#include <stdlib.h>
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
	char caracter;
	FILE *flujo = fopen(filename, "rb");
	size_t i = 0;

	if (flujo == NULL || filename == NULL)
	{
		return (0);
	}

	while (i < letters && feof(flujo) == 0)
	{
		caracter = fgetc(flujo);
		printf("%c", caracter);
		i++;
	}

	fclose(flujo);
	return (i);
}
