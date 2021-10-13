#include "main.h"
#include <stdio.h>
/**
 * _strcat - dest + src
 * @src: string 1
 * @dest: string 2
 *
 *
 * Return: str len
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int z = 0;

	while (*(dest + i))
	{
		i++;
	}

	while (*(src + j))
	{
		j++;
	}

	k = j + i;

	for (z = i; z <= k; z++)
	{
		dest[z] = src[z - i];
	}

	return (dest);
}
