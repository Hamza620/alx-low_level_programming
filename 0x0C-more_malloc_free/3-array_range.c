#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - unction that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p, i, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	p = malloc(sizeof(int) * s);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		p[i] = min++;
	return (p);
}
