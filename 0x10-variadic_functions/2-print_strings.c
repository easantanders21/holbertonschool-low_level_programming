#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: separator
 * @n: n size
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char*));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
