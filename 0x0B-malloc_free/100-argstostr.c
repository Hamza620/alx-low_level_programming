#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: Counter
 * @av: Values
 * Return: NULL if ac == 0 or av == NULL
 * pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, lent = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			lent++;
		lent++;
	}
	s = malloc((lent + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k++] = '\n';
	}

	s[k] = '\0';
	return (s);
}
