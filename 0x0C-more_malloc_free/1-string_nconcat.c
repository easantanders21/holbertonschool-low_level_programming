#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings with limit n
 * @s1: s1
 * @s2: s2
 * @n: n size second string
 *
 * Return: strcon or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, k, r, j = 0;
	char *strcon;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(*strcon) * 1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(*strcon) * 1);
		*s2 = '\0';
	}
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	if (j < n)
		n = j;
	k = i + n;
	strcon = malloc(sizeof(char) * (k + 1));
	if (strcon == NULL)
		return (NULL);

	for (r = 0; r < i; r++)
	{
		*(strcon + r) = s1[r];
	}
	for (r = i; r <= k; r++)
	{
		*(strcon + r) = s2[r - i];

		if (s2[r - i] == '\0')
			return (strcon);
		if (r == k)
			*(strcon + r) = '\0';
	}
	return (strcon);
}
