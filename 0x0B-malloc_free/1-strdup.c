#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string Input
 * Return: pointer to a new string ,NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i, size;
	char *s;

	if (str == NULL)
		return (NULL);
	size = 0;
	while (str[size] != '\0')
		size++;
	size++;
	s = malloc(size * sizeof(*str));
	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			s[i] = str[i];
			i++;
		}
	}
	return (s);
}
