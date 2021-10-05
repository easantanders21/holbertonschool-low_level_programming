#include "main.h"

/**
 * _islower - Returns 1 if c is lowercase.
 *
 * @c: is the value to receive
 * Return: Always 0.
 */

int _islower(int c)
{

char u1 = 'A';
char u2 = 'Z';
int p;

if (c > u1 && c < u2)
{
p = 0;
}
else
{
p = 1;
}

return (p);
}
