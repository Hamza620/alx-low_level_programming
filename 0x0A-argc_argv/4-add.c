#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: number to check
 * Return: 1 if digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 * Return: converted int
 */
int _atoi(char *s)
{
	int g = 1;
	unsigned int r = 0;

	do {
		if (*s == '-')
			g = g * -1;
		else if (*s >= '0' && *s <= '9')
			r = (r * 10) + (*s - '0');
		else if (r > 0)
			break;
	} while (*s++);
	return (r * g);
}

/**
 * main - Entry function
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0 if success 1 if Error
 */
int main(int argc, char **argv)
{
	int sum = 0, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		for (j = 0; num[j] != '\0'; j++)
		{
			if (!_isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += _atoi(num);
	}

	printf("%d\n", sum);
	return (0);
}
