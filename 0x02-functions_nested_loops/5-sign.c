#include "main.h"

/**
 * _isalpha - Returns 1 if c is lowercase or uppercase.
 * @c: is the value to receive
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
int p;

if (n > 0)
{
_putchar('+');
p = 1;
}
else if (n < 0)
{
_putchar('-');
p = -1;
}
 else if (n == 0)
{
_putchar('0');
p = 0;
}

return (p);
}
