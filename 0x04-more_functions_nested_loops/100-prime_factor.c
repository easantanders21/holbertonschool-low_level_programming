#include <stdio.h>
/**
 * main - Largest prime Factor
 *
 * Return: Always 0.
 */
int main(void)
{
	long long int num;
	long long int i;
	long long int j;
	long long int p;
	long long int pnp;
	long long int comp = 612852475143;
	int b1 = 0;

num = comp;
for (i = 2; i <= num ; i++)
{
pnp = 0;
for (j = 2; j < i; j++)
{
p = i % j;
if (p == 0)
{
pnp++;
} }
if (pnp == 0)
{
if (comp % i == 0)
{
do {
comp = comp / i;
if (comp <= 1)
{
b1 = 1;
} } while (comp % i == 0 && b1 == 0);
} }
if (pnp > 0)
{
}
if (comp == 1)
{
num = i;
} }
printf("%lli\n", i - 1);
return (0);
}
