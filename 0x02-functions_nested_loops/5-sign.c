#include "main.h"

/**
 * print_sign  - Returns 1, 0 o -1.
 * @n: is the value to receive
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
