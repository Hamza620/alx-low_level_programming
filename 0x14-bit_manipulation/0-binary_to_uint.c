#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int out = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		out = out * 2;
		out += (b[i] - '0');
	}
	return (out);

}
