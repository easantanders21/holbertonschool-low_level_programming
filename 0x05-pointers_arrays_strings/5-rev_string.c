#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - print reverse
 * @s: str
 *
 *
 * Return: void
 */
void rev_string(char *s)
{
	char cadena[1000];
	int j = 0;
	int i = 0;
	int k = 0;

	while (*(s + j))
	{
		j++;
	}

	i = j;

	for (k = 0; k <= i; k++)
	{
		cadena[k] = s[k];
	}

	for (k = 0; k < i; k++)
	{
		*(s + k) = cadena[i - 1 - k];

	}
}
