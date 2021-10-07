#include "main.h"
/**
 * print_times_table - n Table.
 * @n: n table
 *
 * Return: void.
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int a, b, c, d, e, f;
	for (b = 0; b <= n; b++)
	{
	for (a = 0; a <= n; a++)
	{
		c = a * b;	if (c < 10)
		{_putchar(c + 48);
		if (a < n)
		{_putchar(',');
		_putchar(' ');
		_putchar(' ');
		if (c + b < 10)
		{_putchar(' ');
		} } }
		if (c >= 10 && c <= 99)
		{d = c / 10;
		_putchar(d + 48);
		e = c % 10;
		_putchar(e + 48);
		if (a < n)
		{_putchar(',');
		_putchar(' ');
		if (c + b < 100)
		{_putchar(' ');
		} } }
		if (c >= 100)
		{f = c / 100;
		_putchar(f + 48);
		d = (c / 10) % 10;
		_putchar(d + 48);
		e = c % 10;
		_putchar(e + 48);
		if (a < n)
		{ _putchar(',');
		_putchar(' ');
		} } }
	_putchar('\n');
} } }
