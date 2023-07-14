#include <stdio.h>
#include <stdlib.h>

/**
 * isDigit - function that checks for a digit (0 through 9)
 * @s: number to check
 * Return: 1 if digit otherwise 0
 */
int isDigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * stringLength - function that returns the length of a string
 * @s: the string
 * Return: lenth of the string
 */
int stringLength(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * main - Entry function
 * @argc: Number arguments
 * @argv: Array arguments
 * Return: Always 0, 98 on error
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int i, carry, d1, d2, *res, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !isDigit(s1) || !isDigit(s2))
	{
		printf("Error\n");
		return (98);
	}
	int z1 = stringLength(s1), z2 = stringLength(s2), z = z1 + z2 + 1;
	res = malloc(sizeof(int) * z);
	if (!res)
		return (1);
	for (i = 0; i <= z1 + z2; i++)
		res[i] = 0;
	for (z1 = z1 - 1; z1 >= 0; z1--)
	{
		d1 = s1[z1] - '0';
		carry = 0;
		for (z2 = stringLength(s2) - 1; z2 >= 0; z2--)
		{
			d2 = s2[z2] - '0';
			carry += res[z1 + z2 + 1] + (d1 * d2);
			res[z1 + z2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[z1 + z2 + 1] += carry;
	}
	for (i = 0; i < z - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			putchar(res[i] + '0');
	}
	if (!a)
		putchar('0');
	putchar('\n');
	free(res);
	return (0);
}
