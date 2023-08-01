#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function for the operation
 * @s: The operator
 * Return: the right operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}; int i

	i = 0;
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && !(*(s + 1)))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
