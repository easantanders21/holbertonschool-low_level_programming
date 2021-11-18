#include <stdio.h>
#include "main.h"

/**
 * flip_bits - n fliped to m
 * @n: number 1 to be fliped
 * @m: number 2 to be fliped
 *
 * Return: flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xo;
	int i = 0;

	xo = n ^ m;

	while (xo > 0)
	{
		if ((xo & 1) == 1)
			i++;

		xo = xo >> 1;
	}

	return (i);
}
