/**
 * _abs  - Returns abs.
 * @n: is the value to receive
 *
 * Return: Always p.
 */

int _abs(int n)
{
int p;

if (n > 0)
{
p = n;
}
else if (n < 0)
{
p = n * -1;
}
else if (n == 0)
{
p = 0;
}

return (p);
}
