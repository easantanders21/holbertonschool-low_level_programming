#include "main.h"
#include <stdio.h>
/**
 * print_line - print _____n
 * @n: n lines
 *
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
	int i;

	for (i = 1; i <= n ; i++)
	{
		_putchar(95);
	}
	}

	_putchar('\n');
}
