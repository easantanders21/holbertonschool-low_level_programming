#include "main.h"
#include <stdio.h>
/**
 * _strchr - caracter locate function
 * @s: string
 * @c: caracter
 *
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	unsigned int j;
	int pos = 0;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			pos = j;
			break;
		}
		j++;
	}
	return (s + pos);
}
