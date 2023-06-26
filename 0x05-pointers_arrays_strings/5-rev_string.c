#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string input
 *
 */
void rev_string(char *s)
{
	int lent = 0;
	char *tail = s;

	while (*tail != '\0')
	{
		lent++;
		tail++;
	}
	tail--;
	while (s < tail)
	{
		char b = *s;
		*s = *tail;
		*tail = b;
		s++;
		tail--;
	}
}
