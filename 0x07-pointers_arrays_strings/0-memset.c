#include "main.h"
#include <stdio.h>
/**
 * _memset - memset function
 * @s: string
 * @b: char
 * @n: n
 *
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (j < n)
	{
		s[j] = b;
		j++;
	}
	return (s);
}
