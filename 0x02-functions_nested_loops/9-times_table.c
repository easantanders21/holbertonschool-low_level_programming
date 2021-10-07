#include "main.h"
/**
 * times_table - 9 Table.
 *
 * Return: void.
 */
void times_table(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	for (b = 0; b <= 9; b++)
	{
	for (a = 0; a <= 9; a++)
	{
		c = a * b;
		if (c < 10)
		{ /*1*/
		_putchar(c + 48);
		if (a < 9)
		{ /*quita la ultima coma*/
		_putchar(',');
		_putchar(' ');
		if (c + b < 10)
		{ /*2*/
		_putchar(' ');
		} /*2*/
		} /* quita la ultima coma*/
		} /*1*/
		if (c >= 10)
		{ /*3*/
		d = c / 10;
		_putchar(d + 48);
		e = c % 10;
		_putchar(e + 48);
		if (a < 9)
		{ /* quita la ultima coma*/
		_putchar(',');
		_putchar(' ');
		} /*quita la ultima coma*/
		} /*3*/
	}
	_putchar('\n');
	}
}
