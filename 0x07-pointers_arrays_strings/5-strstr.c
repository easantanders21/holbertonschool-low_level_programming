#include "main.h"
#include <stdio.h>
/**
 * _strstr - needle int haystack
 * @haystack: string 1
 * @needle: string 2
 *
 *
 * Return: s[i]
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int f = 0;

	while (haystack[i] != '\0')
	{
		i++;
	}
	while (haystack[j] != '\0')
	{
		f = 1;
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (needle[k] == haystack[j + k])
			{
				f = f * 1;
			}
			if (needle[k] != haystack[j + k])
			{
				f = f * 0;
			}
		}
		if (f == 1)
		{
			break;
		}
		j++;
	}
	if (haystack[j] == needle[0] && j < i)
	{
		haystack = &haystack[j];
		return (haystack);
	}
	return ('\0');
}
