#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get another number
 * @n: first number
 * @m: second number
 * Return: number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exores;
	unsigned int t = 0;

	exores = n ^ m;
	while (exores)
	{
		t = t + exores & 1UL;
		exores >>= 1;
	}
	return (t);
}
