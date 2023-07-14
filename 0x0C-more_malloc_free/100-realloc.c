#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 * Return: reallocated memory block pointer's
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size, i;
	void *p;
	char *s, *d;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (old_size < new_size)
		min_size = old_size;
	else
		min_size = new_size;
	s = (char *)ptr;
	d = (char *)p;
	for (i = 0; i < min_size; i++)
		d[i] = s[i];
	free(ptr);
	return (p);
}
