#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: input string
 *
 */
void print_rev(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	s--;
	for (lent; lent > 0; lent--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');

}
