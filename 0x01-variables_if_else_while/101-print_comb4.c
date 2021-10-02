#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{ /*x*/
int a;
int b;
int c;
int f = 0;

for (a = 48; a < 58; a++)
{
b = a;
for (; b < 58; b++)
{
c = b;
for (; c < 58; c++)
{
if (a != b && a != c && b != c)
{
putchar(a);
putchar(b);
putchar(c);
if (a == 55 && b == 56 && c == 57)
{ /*0*/
f = 1;
} /*0*/
if (f == 0)
{ /*1*/
putchar(',');
putchar(' ');
} /*1*/
}
}
}
}
putchar('\n');
return (0);
} /*x*/
