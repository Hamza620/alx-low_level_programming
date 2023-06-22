#include "main.h"

/**
 * powr - calculer the power of two numbers
 * @a: The base
 * @b: The exponent
 * Return: a^b result
 */
int powr(int a, int b)
{
	int i, p = 1;

	for (i = 0; i < b; i++)
	{
		p = p * a;
	}
	return (p);
}
/**
 * print_number - function that prints an integer
 * @n: integer to print
 *
 */
void print_number(int n)
{
	int k, tn, digit, c = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
		_putchar('0');
	tn = n;
	while (tn != 0)
	{
		tn = tn / 10;
		c++;
	}
	for (k = c; k >= 1; k--)
	{
		digit = (n / powr(10, k - 1)) % 10;
		_putchar(digit + '0');
	}
}
