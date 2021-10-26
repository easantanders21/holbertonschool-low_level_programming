#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size
 * @c: char
 *
 * Return: char or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}

	return (str);
}
