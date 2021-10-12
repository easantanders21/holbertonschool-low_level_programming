#include "main.h"
#include <stdio.h>
/**
 * puts2 - print str 2
 * @str: str
 *
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (*(str + i))
	{
		j = i % 2;
		if (j == 0)
		{
		putchar (str[i]);
		}
		i++;
	}
	putchar ('\n');
}
