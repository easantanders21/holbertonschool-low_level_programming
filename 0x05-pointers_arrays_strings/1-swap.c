#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap a, b
 * @a: var a
 * @b: var b
 *
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int aa = *a;
	int bb = *b;

	*a = bb;
	*b = aa;
}
