#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: Size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
