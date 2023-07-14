#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

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
	memset(p, 0, nmemb * size);
	return (p);
}
