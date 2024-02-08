#include "main.h"

/**
 * get_endianness - checks what endianness
 *
 * Return: 0 if big Endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned long int g;
	char *e;

	g = 1;
	e = (char *) &g;
	return (*e);
}
