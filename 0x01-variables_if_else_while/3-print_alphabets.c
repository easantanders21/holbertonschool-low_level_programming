#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char l = 'a';
char u = 'A';

do {

putchar(l);
l++;

} while (l <= 'z');

do {

putchar(u);
u++;

} while (u <= 'Z');


putchar('\n');

return (0);
}
