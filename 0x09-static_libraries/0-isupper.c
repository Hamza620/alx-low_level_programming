#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: char to check
 * Return: 1 if upper otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
