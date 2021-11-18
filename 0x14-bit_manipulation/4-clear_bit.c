#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clear a bit of number
 * @n: number
 * @index: index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n = ~(1 << index) & *n;

	return (1);
}
