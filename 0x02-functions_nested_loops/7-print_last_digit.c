#include "main.h"
/**
 * print_last_digit - Returns last digit.
 * @n: is the value to receive
 *
 * Return: Always p.
 */
int print_last_digit(int n)
{
long int nn = n;
int m;
int p;
int abs = n;

if (abs < 0)
{
nn = nn * -1;
}
m = nn % 10;
p = m + 48;
_putchar(p);

return (m);
}
