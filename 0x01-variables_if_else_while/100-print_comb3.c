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
int f;
for (a = 48; a < 58; a++)
{ /*4*/
b = a;
for (; b < 58; b++)
{ /*3*/
if (a != b)
{ /*2*/
putchar(a);
putchar(b);
if (a == 56 && b == 57)
{ /*0*/
f = 1;
} /*0*/
if (f == 0)
{ /*1*/
putchar(',');
putchar(' ');

} /*1*/
} /*2*/
} /*3*/
} /*4*/

putchar('\n');
return (0);

} /*x*/
