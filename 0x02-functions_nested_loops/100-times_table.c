#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: Input number
 * Return: Always 0
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (b != 0)
				{
					if (c < 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (c >= 10 && c < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				if (c < 10)
				{
					_putchar(c + '0');
				}
				else if (c >= 10 && c < 100)
				{
					_putchar(c / 10 + '0');
					_putchar(c % 10 + '0');
				}
				else
				{
					_putchar(c / 100 + '0');
					_putchar((c / 10) % 10 + '0');
					_putchar(c % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
