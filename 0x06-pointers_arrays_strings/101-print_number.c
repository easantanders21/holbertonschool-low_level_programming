#include "main.h"
#include <stdio.h>
/**
 * print_number - print number
 * @n: num int
 *
 *
 * Return: void
 */
void print_number(int n)
{
	int i, m, tmp;

	if (n < 0)
	{
		if (n % 10 != 0 && n != -1)
			n += 1;
		_putchar('-');
		n *= -1;
	}
	else
		if (n % 10 != 0)
			n -= 1;
	tmp = n / 10;
	for (i = 1 ; i <= tmp ; i *= 10)
	{
	}
	if (i == 0)
		_putchar('0');
	for (; i > 0 ; i /= 10)
	{
		m = (n / i) % 10;
		if (i == 1 && n % 10 != 0 && n != 1)
			m += 1;
		_putchar(m + '0');
	}
}
