#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string where to search
 * @c: serched char
 * Return: adress of the character or NULL when nothing found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
