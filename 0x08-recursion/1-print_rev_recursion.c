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
	char prueba[1000];
	int i = 0;

	while (*(s + i))
	{
		prueba[i] = s[i];
		i++;
	}
	_putchar(prueba[i - 1]);
	prueba[i - 1] = '\0';

	if (i < 2)
	{

		return;
	}

	_print_rev_recursion(prueba);
}
