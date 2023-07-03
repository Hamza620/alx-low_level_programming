#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: byte that replace
 * @n: number of bytes
 * Return: the pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;
	while (n > 0)
	{
		s[a] = b;
		n--;
		a++;
	}
	return (s);
}
