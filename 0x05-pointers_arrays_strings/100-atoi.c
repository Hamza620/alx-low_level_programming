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

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (r > INI_MAX /10 || (r == INI_MAX /10 && (s[i] - '0') > INT_MAX % 10 ))
		{
			if (g == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		r = (r * 10) + (s[i] - '0');
		i++;
	}
	return (r * g);
}
