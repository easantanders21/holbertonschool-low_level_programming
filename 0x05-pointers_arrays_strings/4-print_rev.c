#include "main.h"
#include <stdio.h>
/**
 * print_rev - print reverse
 * @s: str
 *
 *
 * Return: void
 */
void print_rev(char *s)
{
	int j = 0;
	int i = 0;
	int k = 0;

	while (*(s + j))
	{
		j++;
	}

	i = j;

	for (k = i - 1; k >= 0; k--)
	{
		_putchar (s[k]);
	}

	_putchar ('\n');
}
