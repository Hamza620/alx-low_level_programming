#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes from s2
 * Return: New pointer in success, and NULL in failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, z1 = 0, z2 = 0, z;
	char *s;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	while (s1[z1] != '\0')
		z1++;
	while (s2[z2] != '\0')
		z2++;
	if (n >= z2)
		n = z2;
	z = z1 + n;
	s = malloc((z + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < z1; i++)
		s[i] = s1[i];
	for (; n < z2 && i < z; i++, j++)
		s[i] = s2[j];
	for (; n >= z2 && i < (z1 + z2); i++, j++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
