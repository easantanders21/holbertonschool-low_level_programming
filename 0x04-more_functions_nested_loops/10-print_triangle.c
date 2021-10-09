#include "main.h"
#include <stdio.h>
/**
 * print_triangle - print triangle
 * @size: size square
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i;
		int j;
		int s;

		for (j = 1; j <= size ; j++)
		{

			s = size - j;

			for (i = 1; i <= size ; i++)
			{

				if (i <= s)
				{
				putchar(' ');
				}

				if (i > s)
				{
				putchar('#');
				}

			}

			putchar('\n');

		}
	} else
	{

		putchar('\n');

	}
}
