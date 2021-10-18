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
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			break;
		}
		j++;
	}

	if (s[j] == c)
	{
		s = &s[j];
		return (s);
	}

		return ('\0');

}
