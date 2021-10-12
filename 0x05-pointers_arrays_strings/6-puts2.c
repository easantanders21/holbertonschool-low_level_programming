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

	while (*(str + i))
	{
		putchar (str[i]);
		i = i + 2;
	}
	putchar ('\n');
}
