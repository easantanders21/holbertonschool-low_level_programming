#include "main.h"
#include <stdio.h>
/**
 * puts_half - print str half
 * @str: str
 *
 *
 * Return: void
 */
void puts_half(char *str)
{
	int j = 0;
	int i = 0;
	int h = 0;

	while (*(str + i))
	{
		i++;
	}

	h = i / 2;

	if (h % 2 == 0)
	{
		h++;
	}

	while (*(str + j))
	{
		if (j >= h)
		{
			putchar (str[j]);
		}
		j++;
	}
	putchar ('\n');
}
