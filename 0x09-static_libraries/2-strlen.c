#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the string
 * Return: lenth of the string
 */
int _strlen(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	return (lent);
}
