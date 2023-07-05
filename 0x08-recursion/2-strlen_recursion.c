#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string input
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int lent = 0;

	if (*s)
	{
		lent++;
		lent = lent + _strlen_recursion(s + 1);
	}
	return (lent);
}
