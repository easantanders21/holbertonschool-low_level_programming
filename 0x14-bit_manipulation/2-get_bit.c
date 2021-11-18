#include <stdio.h>
#include "main.h"

/**
 * get_bit - get bit of n
 * @n: number
 * @index: index
 *
 * Return: bit to index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int res = 0;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	res = (n >> index) & 1;

	return (res);
}
