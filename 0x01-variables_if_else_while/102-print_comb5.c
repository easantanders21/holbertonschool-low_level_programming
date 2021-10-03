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
int d;
int j = 0;
int k = 0;
int f = 1;
for (a = 48; a < 58; a++)
{ /*0*/
for (b = 48; b < 58; b++)
{ /*1*/
j++;
k = 0;
for (c = 48; c < 58; c++)
{ /*2*/
for (d = 48; d < 58; d++)
{ /*3*/
k++;
if (k > j)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a == 57 && b == 56)
{
f = 0;
}
if (f == 1)
{
putchar(',');
putchar(' ');
}
}
} /*3*/
} /*2*/
} /*1*/
} /*0*/
putchar('\n');
return (0); }
