#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - sum of all its parameters
* @n: count of args
* @...: input args
* Return: sum or 0 when n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	if (n == 0)
		return (0);
	int s = 0, i;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		s += va_arg(args, int);
		i++;
	}
	return (s);
}
