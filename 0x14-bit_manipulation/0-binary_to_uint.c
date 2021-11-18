#include <stdio.h>
#include "main.h"

/**
 * pot - a raised to b
 * @a: base
 * @b: pot
 *
 * Return: pot
 */
unsigned int pot(unsigned int a, unsigned int b)
{
	if (b == 0)
		return (1);

	return (a * pot(a, b - 1));
}

/**
 * binary_to_uint - binary to decimal number
 * @b: binary number
 *
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j, dec = 0, val = 0;

	if (b == NULL)
		return (0);

	while (*(b + i))
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (b[j] == '0')
		{
			val = 0;
		} else if (b[j] == '1')
		{
			val = pot(2, i - 1 - j);
		} else
		{
			return (0);
		}
		dec = dec + val;
	}

	return (dec);
}
