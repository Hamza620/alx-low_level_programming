#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: to copy area
 * @src: copied area
 * @n: number of bytes
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
