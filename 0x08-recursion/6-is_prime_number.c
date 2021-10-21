#include <stdio.h>
#include "main.h"

/**
 * is_prime2 - i love you x2
 * @val: num2
 * @b: num3
 *
 * Return: void
 */

int is_prime2(int val, int b)
{
	if (b == val)
	{
		return (1);
	}
	if (val % b == 0)
	{
		return (0);
	}
	return (is_prime2(val, b + 1));
}

/**
 * is_prime_number - i love you
 * @n: num1
 *
 * Return: void
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n == 1 || n == -1)
	{
		return (0);
	}

	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	return (is_prime2(n, i));
}
