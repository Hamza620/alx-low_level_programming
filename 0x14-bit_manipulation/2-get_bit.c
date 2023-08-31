#include "main.h"

/**
 * get_bit - gives value of a bit at a given index
 * @n: input
 * @index: given index
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = 8 * sizeof(n);
	unsigned long int op;

	if (index >= size)
		return (-1);
	op = n >> index & 1;
	return (op);
}
