#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char l = 'a';

do {

if (l != 'q' && l != 'e')
{
putchar(l);
}

l++;

} while (l <= 'z');

putchar('\n');

return (0);
}
