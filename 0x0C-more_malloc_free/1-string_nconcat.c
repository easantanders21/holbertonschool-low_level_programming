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

	while (s1 && *(s1 + i))
		i++;
	while (s2 && *(s2 + j))
		j++;
	if (j < n)
		n = j;
	k = i + n;
	strcon = malloc(sizeof(char) * (k + 1));
	if (strcon == NULL)
		return (NULL);

	for (r = 0; r < i && s1; r++)
	{
		*(strcon + r) = s1[r];
	}
	for (r = i; r < k && s2; r++)
	{
		*(strcon + r) = s2[r - i];
	}

	*(strcon + r) = '\0';

	return (strcon);
}
