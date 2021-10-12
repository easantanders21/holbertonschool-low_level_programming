#include "main.h"
#include <stdio.h>
/**
 * _strcpy - dest = src
 * @src: string
 * @dest: src copy
 *
 *
 * Return: str len
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + j))
	{
		j++;
	}

	while (i <= j)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
