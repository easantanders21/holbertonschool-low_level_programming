#include "main.h"

/**
 * _islower - Returns 1 if c is lowercase.
 *
 * @c: is the value to receive
 * Return: Always 0.
 */

int _islower(int c)
{

char u1 = 'a';
char u2 = 'z';
int p;

if (c >= u1 && c <= u2)
{
p = 1;
}
else
{
p = 0;
}

return (p);
}
