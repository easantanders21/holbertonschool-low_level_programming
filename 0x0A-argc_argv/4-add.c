#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints sum of numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int r;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] != '0')
		{
			r = atoi(argv[i]);
			if (r == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
