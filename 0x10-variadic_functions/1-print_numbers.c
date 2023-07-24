#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers
* @separator: separator char
* @n: args counts
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int val;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(args, int);

		printf("%d", val);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
