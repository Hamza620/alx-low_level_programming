#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: The size to allocate
 * @c: init char
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(size);
	if (size == 0 || arr == 0)
		return (NULL);
	while (size)
	{
		size--;
		arr[size] = c;
	}
	return (arr);
}
