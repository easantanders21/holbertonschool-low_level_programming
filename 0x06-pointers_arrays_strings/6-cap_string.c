#include "main.h"
#include <stdio.h>
/**
 * cap_string - cap string
 * @s: string
 *
 *
 * Return: str cap
 */
char *cap_string(char *s)
{
	int i = 0;
	int j = 0;

	while (*(s + j))
	{
		j++;
	}

	for (i = 0; i < j - 1; i++)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == ',' || s[i] == ';'
		|| s[i] == '.' || s[i] == '?' || s[i] == '"' || s[i] == '('
		|| s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '!'
		|| s[i]	== '\t')
		{
		if (s[i + 1] >= 97 && s[i + 1] <= 122)
		{
			s[i + 1] = s[i + 1] - 32;
		}
		}
	}

	return (s);
}
