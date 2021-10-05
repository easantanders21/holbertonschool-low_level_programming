#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
char l = 'a';
do {
_putchar(l);
l++;
} while (l <= 'z');
_putchar('\n');
}
}
