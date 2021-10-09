#include "main.h"
#include <stdio.h>
/**
 * print_square - print square
 * @size: size square
 *
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (j = 1; j <= size ; j++)
		{

		for (i = 1; i <= size ; i++)
		{
			putchar('#');
		}

		putchar('\n');

		}
	} else
	{

	putchar('\n');

	}
}
