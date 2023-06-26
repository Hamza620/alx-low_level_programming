#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: sring input
 *
 */
void puts_half(char *str)
{
	int hl, lent = 0;

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
	while (*(str + hl) != '\0')
	{
		_putchar(*(str + hl));
		str++;
	}
	_putchar('\n');
}
