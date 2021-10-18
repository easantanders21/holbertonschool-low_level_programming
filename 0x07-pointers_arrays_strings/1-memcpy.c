#include "main.h"
#include <stdio.h>
/**
 * _memcpy - memset function
 * @dest: string dest
 * @src: string source
 * @n: n copyes
 *
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
