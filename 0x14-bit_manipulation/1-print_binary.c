#include "main.h"

/**
 * print_binary - function that prints the binary representation
 * of a number
 * @n: Number to convert
 *
 */
void print_binary(unsigned long int n)
{
	int i, size;

	size = 8 * sizeof(n);
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
			_putchar('1');
		else
			_putchar('0');
	}

}
