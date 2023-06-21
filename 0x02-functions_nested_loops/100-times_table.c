#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: Input number
 * Return: Always 0
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int a;

		for (a = 0; a <= n; a++)
		{
			print_row(a, n);
		}
	}
}

/**
 * print_row - function that prints one row
 * @r: Row number
 * @n: Input number
 */
void print_row(int r, int n)
{
	int b, c;

	for (b = 0; b <= n; b++)
	{
		c = r * b;
		print_number(c);
		separator(b, c, n);
	}
	_putchar('\n');
}

/**
 * print_number - function to print a number
 * @num: Number to be printed
 */
void print_number(int num)
{
	if (num < 10)
	{
		_putchar(num + '0');
	}
	else if (num >= 10 && num < 100)
	{
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
	else
	{
		_putchar(num / 100 + '0');
		_putchar((num / 10) % 10 + '0');
		_putchar(num % 10 + '0');
	}
}

/**
 * separator - function that prints the separator between numbers
 * @b: Current column number
 * @num: Current number
 * @n: Input number
 */
void separator(int b, int num, int n)
{
	if (b != n)
	{
		if (num < 10)
		{
			print_chars(',', ' ', ' ', ' ');
		}
		else if (num >= 10 && num < 100)
		{
			print_chars(',', ' ', ' ', ' ');
		}
		else
		{
			print_chars(',', ' ', ' ');
		}
	}
}

/**
 * print_chars - function that prints a series of characters
 * @c1: Character to be printed
 * @c2: 2nd char
 * @c3: 3rd char
 * @c4: 4th char
 */
void print_chars(char c1, char c2, char c3, char c4)
{
	_putchar(c1);
	_putchar(c2);
	_putchar(c3);
	_putchar(c4);
}

