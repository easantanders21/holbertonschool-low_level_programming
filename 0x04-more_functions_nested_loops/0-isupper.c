#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: var input
 *
 *
 * Return: Always suma
 */

int _isupper(int c)
{
	int r;

	if (c >= 65 && c <= 90)
	{
		r = 1;
	} else if (c >= 97 && c <= 122)
	{
		r = 0;
	} else
	{
		r = 0;
	}

	return (r);
}
