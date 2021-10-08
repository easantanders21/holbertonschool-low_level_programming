#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit
 * @c: var input
 *
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	int r;

	if (c >= 48 && c <= 57)
	{
		r = 1;
	} else
	{
		r = 0;
	}

	return (r);
}
