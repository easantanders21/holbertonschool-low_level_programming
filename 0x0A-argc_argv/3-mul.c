#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *
 * Return: s[i]
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = (atoi(argv[1])) * (atoi(argv[2]));

	printf("%d\n", mul);

	(void) argc;

	return (0);
}
