#include "main.h"
/**
 * jack_bauer - Returns 24 h.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int h1 = 0;
int h2 = 0;
int h3 = 0;
int h4 = 0;
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int i = 0;
for (a = 0; a <= 2; a++)
{
h1 = a + 48;
for (b = 0; b <= 9; b++)
{
h2 = b + 48;
for (c = 0; c <= 5; c++)
{
h3 = c + 48;
for (d = 0; d <= 9; d++)
{
h4 = d + 48;
i++;
if (i <= 1440)
{
_putchar(h1);
_putchar(h2);
_putchar(':');
_putchar(h3);
_putchar(h4);
_putchar('\n');
}
}
}
}
}
}
