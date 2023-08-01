#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry function
 * @argc: number of arguments
 * @argv: Array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = op_func(num1, num2);
	printf("%d\n", res);
	return (0);
}
