#include "main.h"
#include <stdio.h>
/**
 * _strncpy - dest cpy src
 * @src: string 1
 * @dest: string 2
 * @n : n
 *
 * Return: str copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(src + j))
	{
		j++;
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

		if (i > j)
		{
			dest[i] = '\0';
		}
	}

	i = 0;


	return (dest);

}
