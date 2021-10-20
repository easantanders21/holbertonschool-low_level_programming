#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - puts with recursion
 * @s: str
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
