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
	int b = 0;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			pos = j;
			s = s + pos;
			b = 1;
			break;
		}
		j++;
	}

	if (b == 0)
	{
		return ('\0');
	} else

	return (s);

}
