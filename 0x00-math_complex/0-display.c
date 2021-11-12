#include <stdio.h>
#include "holberton.h"
/**
 * display_complex_number - display complex number
 * @c: structure that contain the complex number
 *
 * Return: void
 */
void display_complex_number(complex c)
{
	printf("%d ", c.re);
	if (c.im != 0)
	{
		if (c.im >= 0)
		{
			printf("+ ");
		}

		if (c.im <= 0)
		{
			printf("- ");
		}
		printf("%di", c.im);
	}
	printf("\n");
}
