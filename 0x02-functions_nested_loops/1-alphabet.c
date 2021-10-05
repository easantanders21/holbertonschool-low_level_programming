#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char l = 'a';
do {
_putchar(l);
l++;
} while (l <= 'z');
_putchar('\n');
}
