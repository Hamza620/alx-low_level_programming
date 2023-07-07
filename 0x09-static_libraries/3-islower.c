#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: The charachter to check
 * Return: 1 if it lowercase otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
