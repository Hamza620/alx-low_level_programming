#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * wordcounter - function that count words
 * @s: string to count
 * Return: number of words
 */
int wordcounter(char *s)
{
	int n = 0, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
			n++;
		i++;
	}
	return (n);
}

/**
 * strtow - function that splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, lent, c;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	c = wordcounter(str);
	s = (char **)malloc((c + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		lent = 0;
		for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
			lent++;
		s[k] = (char *)malloc((lent + 1) * sizeof(char));
		if (s[k] == NULL)
		{
			for (i = 0; i < k; i++)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < lent; j++)
			s[k][j] = str[i++];
		s[k][j] = '\0';
		k++;
		while (str[i] == ' ')
			i++;
	}
	s[k] = NULL;
	return (s);
}
