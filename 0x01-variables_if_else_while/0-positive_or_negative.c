#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int a = 0;

srand(time(0));
a = rand() - RAND_MAX / 2;

if (a > 0)
{
printf("%d is positive\n", a);
}

if (a < 0)
{
printf("%d is negative\n", a);
}

if (a == 0)
{
printf("%d is zero\n", a);
}

return (0);
}
