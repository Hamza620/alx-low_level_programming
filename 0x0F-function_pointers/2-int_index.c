#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: If no element matches, return -1 If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
