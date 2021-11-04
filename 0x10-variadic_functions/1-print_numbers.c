#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - sum all numbers
 * @separator: separator
 * @n: n size
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1))
		printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
