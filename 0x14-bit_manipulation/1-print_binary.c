#include <stdio.h>
#include "main.h"

/**
 * print_binary - n to binary
 * @n: number to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int res;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n == 1)
	{
		putchar('1');
		return;
	}

	print_binary(n >> 1);

	res = n & 1;

	if (res == 0)
		putchar('0');
	else
		putchar('1');
}
