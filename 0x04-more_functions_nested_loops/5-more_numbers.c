#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print 0 - 14
 *
 *
 * Return: void
 */

void more_numbers(void)
{
	int j;

	for (j = 0; j < 10 ; j++)
	{
	int i;
	int d;
	int u;

	for (i = 0; i < 15 ; i++)
	{
		u = i;

		if (i > 9)
		{
			u = i % 10;
			d = i / 10;
			_putchar(d + 48);
		}

		_putchar(u + 48);
	}
	_putchar('\n');
	}
}
