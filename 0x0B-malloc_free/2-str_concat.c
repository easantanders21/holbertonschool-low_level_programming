#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: s2
 * @s2: s2
 *
 * Return: s or null
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int r;
	char *str2;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(*str2) * 1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(*str2) * 1);
		*s2 = '\0';
	}
	while (*(s1 + i))
	{
		i++;
	}
	while (*(s2 + j))
	{
		j++;
	}
	k = i + j;
	str2 = malloc(sizeof(char) * (k + 1));

	if (str2 == NULL)

		return (NULL);

	for (r = 0; r < i; r++)
	{
		*(str2 + r) = s1[r];
	}
	for (r = i; r <= k; r++)
	{
		*(str2 + r) = s2[r - i];
	}
	return (str2);
}
