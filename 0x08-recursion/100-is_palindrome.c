#include <stdio.h>
#include "main.h"

/**
 * is_pal2 - is pal 2
 * @l: num2
 * @u: num3
 * @s: strings
 * @p: stringp
 *
 * Return: 1 o 0
 */

int is_pal2(int l, int u, char *s, char *p)
{
	if (*(s + u) != *(p - u))
	{
		return (0);
	}
	if (l == u)
	{
		return (1);
	}

	return (is_pal2(l, u + 1, s, p));
}

/**
 * _strlen_recursion - puts with recursion
 * @s: str
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * is_palindrome - is palindrome?
 * @s: str
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	int i = 0;
	int l;
	char *p;

	l = _strlen_recursion(s) - 1;
	p = &*(s + l);


	return (is_pal2(l, i, s, p));
}
