#include "main.h"

/**
 * _strcmp - function should work exactly like strcmp
 * @s1: first char
 * @s2: second char
 * Return: int comparaison result
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
