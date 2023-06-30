#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: pointer
 * Return: char output
 */
char *string_toupper(char *n)
{
	int c;

	c = 0;
	while (n[c] != '\0')
	{
		if (n[c] >= 'a' && n[c] <= 'z')
			n[c] = n[c] - 32;
		c++;
	}
	return (n);
}
