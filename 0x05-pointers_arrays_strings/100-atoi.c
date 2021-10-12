#include "main.h"
#include <stdio.h>
/**
 * _atoi - return integer
 * @s: str
 *
 *
 * Return: number into str
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	long int sum = 0;
	int b1 = 0;
	int sig = 0;

	while (*(s + i) && b1 == 0)
	{
		if (s[i] <= 57 && s[i] >= 48 && (s[i + 1] > 57 || s[i + 1] < 48))
		{
			b1 = 1;
		}
		if (s[i] == 43)
		{
			sig++;
		}
		if (s[i] == 45)
		{
			sig--;
		}
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] <= 57 && s[j] >= 48)
		{
			sum = s[j] - 48 + sum;
			if (s[j + 1] <= 57 && s[j + 1] >= 48)
			{
				sum = sum * 10;
			}
		}
	}

	if (sig < 0)
	{
		sum = sum * -1;
	}

	return (sum);
}
