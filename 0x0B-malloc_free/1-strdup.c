#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - create array
 * @str: str
 *
 *
 * Return: pointer to a new string
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *str2;

	while (*(str + i))
	{
		i++;
	}

	str2 = malloc(sizeof(char) * (i));

	if (str2 == NULL)

		return (NULL);

	while (*(str + j))
	{
		str2[j] = str[j];
		j++;
	}

	return (str2);
}
