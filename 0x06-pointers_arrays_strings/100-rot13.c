#include "main.h"
#include <stdio.h>
/**
 * rot13 - encode rot13
 * @s: string
 *
 *
 * Return: s encode
 */
char *rot13(char *s)
{
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
		}

		i++;
	}
	return (s);
}
