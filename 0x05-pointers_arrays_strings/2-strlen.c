#include "main.h"
#include <stdio.h>
/**
 * _strlen - return str len
 * @s: str
 *
 *
 * Return: str len
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}

	return (i);
}
