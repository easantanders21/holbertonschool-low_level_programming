#include "main.h"
/**
 * print_last_digit - Returns last digit.
 * @n: is the value to receive
 *
 * Return: Always p.
 */
int print_last_digit(int n)
{
int m;
int p;
int abs = n;

if (abs < 0)
{
n = n * -1;
}
m = n % 10;
p = m + 48;
_putchar(p);

return (m);
}
