#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - calculator
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *
 * Return: print math operating
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (!strcmp(argv[2], "+") || !strcmp(argv[2], "-") || !strcmp(argv[2], "*")
		|| !strcmp(argv[2], "/") || !strcmp(argv[2], "%"))
	{

	num1 = (atoi(argv[1]));
	num2 = (atoi(argv[3]));
	operator = argv[2];

	printf("%d\n", (*get_op_func(operator))(num1, num2));

	} else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}
