#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_memset - set memory with constants
 * @p: memory area to be filled
 * @cst: constant
 * @n: size of the grid
 * Return: pointer
 */
char *_memset(char *p, char cst, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		p[i] = cst;
	}

	return (p);
}

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: elements
 * @size: size of element
 * Return: pointer to the allocated memory otherwise NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == 0)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
