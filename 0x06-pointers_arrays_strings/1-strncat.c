#include "main.h"
#include <stdio.h>
/**
 * _strncat - dest + src
 * @src: string 1
 * @dest: string 2
 * @n : n
 *
 * Return: str len
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;
	int z = 0;
	int c = 0;

	while (*(dest + i))
	{
		i++;
	}

	k = i + n;

	for (z = i; z < k; z++)
	{
		dest[z] = src[z - i];

		if (dest[z] == '\0')
		{
			z = k;
		}
	}


	while (*(dest + c))
	{
		c++;
	}

	return (dest);
}
