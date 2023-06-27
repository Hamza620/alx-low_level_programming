#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 * Return: converted int
 */
int _atoi(char *s)
{
	int g = 1;
	unsigned int r = 0;

	while (*s++)
	{
		if (*s == '-')
			g = g * -1;
		else if (*s >= '0' && *s <= '9')
			r = (r * 10) + (*s - '0');
		else if (r > 0)
			break;
	}
	return (r * g);
}
