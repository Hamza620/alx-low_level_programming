#include "main.h"

/**
 * _strcpy - function that copies the string pointer
 * @dest: buffer pointer
 * @src: string pointer
 * Return: the pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}
