#include "main.h"
#include <stdio.h>
/**
 * _strspn - memset function
 * @s: string
 * @accept: accept
 *
 *
 * Return: strspn
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int count = 0;
	int count2 = 0;
	int f = 0;

	while (*(accept + k))
	{
		k++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		f = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				f = 1;
				if (count > k)
				{
				count2 = count;
				}
			}
		}
		if (f != 1)
		{
			count = 0;
		}
	}
	return (count2);
}
