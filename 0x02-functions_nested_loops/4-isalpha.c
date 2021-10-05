#include "main.h"

/**
 * _isalpha - Returns 1 if c is lowercase or uppercase.
 * @c: is the value to receive
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
char u1 = 'A';
char u2 = 'Z';
char l1 = 'a';
char l2 = 'z';
int p;

if (c > u1 && c < u2)
{
p = 1;
}
else if (c > l1 && c < l2)
{
p = 1;
}
else
{
p = 0;
}

return (p);
}
