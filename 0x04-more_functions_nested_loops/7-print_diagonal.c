#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - print diagonal
 * @n: Diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= j; i++)
			{
				if (i != 1)
				{
				putchar(' ');
				}
			}

		putchar ('\\');
		putchar ('\n');

		}

	} else
	{
		putchar ('\n');
	}

}
