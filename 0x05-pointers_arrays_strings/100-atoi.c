#include "main.h"

/**
 * _isdigit - to check if it degit
 * @c: degit to test
 * Return: Always  dgits
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 * Return: converted int
 */
int _atoi(char *s)
{
	int g = 1;
	int r = 0;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-')
	{
		g = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			break;
		if (r > 2147483647 /10 || (r == 2147483647 /10 && (s[i] - '0') > 2147483647 % 10 ))
		{
			if (g == 1)
				return (2147483647);
			else
				return (-2147483647);
		}
		r = (r * 10) + (s[i] - '0');
		i++;
	}
	return (r * g);
}
