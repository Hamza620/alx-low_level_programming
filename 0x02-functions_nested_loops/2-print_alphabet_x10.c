#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char l;

	while (i < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		i++;
	}
}
