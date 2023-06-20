#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: Input number
 * Return: Last digit of the Input number
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;
	l = n % 10;
	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
