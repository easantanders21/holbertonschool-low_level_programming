#include "main.h"
#include <stdio.h>
/**
 * leet - encode 1337
 * @s: string
 *
 *
 * Return: s encode
 */
char *leet(char *s)
{

	char arr1[] = "AEOTL";
	char arr2[] = "aeotl";
	char arr3[] = "43071";
	/*int i = 0;*/
	int j = 0;
	int k = 0;

	for (k = 0; k < 5; k++)
	{

	while (*(s + j))
	{
		if (s[j] == arr1[k] || s[j] == arr2[k])
		{
			s[j] = arr3[k];
		}

		j++;
	}
	j = 0;
	}
	return (s);
}
