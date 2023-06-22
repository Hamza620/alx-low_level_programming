#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 *
 */
void more_numbers(void)
{
	int a, i;

	i = 0;
	while (i < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
			}
		_putchar('\n');
		i++;
	}
}
