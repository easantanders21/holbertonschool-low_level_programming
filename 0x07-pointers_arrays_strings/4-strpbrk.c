#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - first caracter locate function
 * @s: string
 * @accept: string 2
 *
 *
 * Return: s[i]
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int f = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (s[j] != '\0')
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
		if (s[j] == accept[k])
		{
			f = 1;
			break;
		}
		}

		if (f == 1)
		{
			break;
		}
		j++;
	}

	if (s[j] == accept[k] && j < i)
	{
		s = &s[j];
		return (s);
	}

	return ('\0');

}
