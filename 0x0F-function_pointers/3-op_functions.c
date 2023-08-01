#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - the sum of two integers
 * @a: First integer
 * @b: Second integer
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two integers
 * @a: First integer
 * @b: Second integer
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two integers
 * @a: First integer
 * @b: Second integer
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two integers
 * @a: First integer
 * @b: Second integer
 * Return: a / b or error when b = 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of the division of two integers
 * @a: First integer
 * @b: Second integer
 * Return: a % b or error when b = 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
