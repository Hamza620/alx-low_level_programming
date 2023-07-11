#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: New pointer in success, and NULL in failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, z1 = 0, z2 = 0, z;
	char *s;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (s1[z1] != '\0')
		z1++;
	while (s2[z2] != '\0')
		z2++;
	z = z1 + z2;
	s = malloc(z * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= z; i++)
	{
		if (i < z1)
			s[i] = s1[i];
		else
			s[i] = s2[i - z1];
	}
	s[i] = '\0';
	return (s);
}
