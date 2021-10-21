#include <stdio.h>
#include "main.h"

/**
 * _sqrtp - i love you x2
 * @a: num2
 * @b: num3
 *
 * Return: void
 */

int sqrtp(int a, int b)
{
	if ((b * b)  == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	}

	return (sqrtp(a, b + 1));
}

/**
 * _sqrt_recursion - i love you
 * @n: num1
 *
 * Return: void
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (sqrtp(n, i));
}
