#include "main.h"
#include <stdio.h>
/**
 * main - Fizz Buzz
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int m3;
int m5;

for (i = 1; i <= 100; i++)
{
m3 = i % 3;
m5 = i % 5;

if (m3 == 0 && m5 != 0)
{

printf("Fizz ");

}
else if (m5 == 0 && m3 != 0)
{

printf("Buzz ");

}
else if (m3 == 0 && m5 == 0)
{

printf("FizzBuzz ");
}

else
{

printf("%d ", i);
}
}

putchar('\n');

return (0);
}
