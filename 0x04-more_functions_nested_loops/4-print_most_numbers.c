#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - print 0 - 9 exept 2 - 4
 *
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;
	int b;

	for (i = 0; i < 10 ; i++)
	{
		b = 0;

		if (i == 2 || i == 4)
		{
			b = 1;
		}
		if (b == 0)
		{
			putchar(i + 48);
		}
	}
	putchar('\n');
}
