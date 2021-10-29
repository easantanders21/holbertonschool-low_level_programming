#include "main.h"
#include <stdlib.h>
/**
 * print_number -  prints an integer.
 *@n: integrer to program.
 *
 * Return: void.
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
/**
 * main - multiplies two positive numbers.
 *@argc: argument count.
 *@argv: argument vector.
 *
 * Return: 0 if success.
 */
int main(int argc, char **argv)
{
	int mul;
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int i, m;
	char *s;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		for (m = 0; s[m]; m++)
		{
			if (s[m] < 48 || s[m] > 57)
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');

				exit(98);
			}
		}
	}
	mul = n1 * n2;
	print_number(mul);
	_putchar('\n');
	return (0);
}
