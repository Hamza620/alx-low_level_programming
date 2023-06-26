#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: sring input
 *
 */
void puts_half(char *str)
{
	int hl, i, lent = 0;

	while (*str != '\0')
	{
		lent++;
		str++;
	}
	if (lent % 2 == 0)
	{
		hl = lent / 2;
	}
	else if (lent % 2 != 0)
	{
		hl = (lent - 1) / 2;
	}
	for (i = hl; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
