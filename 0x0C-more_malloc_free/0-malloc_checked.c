#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - unction that allocates memory using malloc
 * @b: Allocation size
 * Return: pointer to the allocated memory, 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
