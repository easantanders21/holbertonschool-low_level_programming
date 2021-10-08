#include "main.h"

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

	for (i = 0; i <= n ; i++)
	{
		_putchar('_');
	}
	}

	_putchar('\n');
}
