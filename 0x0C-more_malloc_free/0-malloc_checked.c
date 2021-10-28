#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - malloc checked
 * @b: size
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *mcheck;

	mcheck = malloc(b);

	if (mcheck == NULL)
	{
		exit(98);
	}

	return (mcheck);
}
