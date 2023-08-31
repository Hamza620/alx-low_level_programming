#include "main.h"

/**
 * print_binary - function that prints the binary representation
 * of a number
 * @n: Number to convert
 *
 */
void print_binary(unsigned long int n)
{
	int i, size, j = 1;
	unsigned long int op;

	size = 8 * sizeof(n);
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		op = 1L << i;
		if (n & op)
		{
			j = 0;
			_putchar('1');
		}
		else if (!j)
			_putchar('0');
	}

}
