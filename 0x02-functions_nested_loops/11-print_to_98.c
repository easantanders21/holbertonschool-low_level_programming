#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Natural count.
 * @n: is the value to receive
 *
 * Return: Always p.
 */
void print_to_98(int n)
{
int c = n;
int np = n;

if (c <= 98)
{
for (np = n; np <= 98; np++)
{
printf("%d", np);
if (np < 98)
{
printf(", ");
}
}
}

if (c > 98)
{
for (np = n; np >= 98; np--)
{
printf("%d", np);
if (np > 98)
{
printf(", ");
}
}
}
printf("\n");
}
