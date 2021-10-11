#include "main.h"
#include <stdio.h>
/**
 * _puts - print str
 * @str: str
 *
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar (str[i]);
		i++;
	}
	_putchar ('\n');
}
