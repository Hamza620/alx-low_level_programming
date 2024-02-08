#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: input
 * @index: index of digit
 * Return: 1 on sucess otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = 8 * sizeof(n);

	if (index >= size)
		return (-1);
	*n |= 1UL <<  index;
	return (1);
}
