#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: buffer
 * @size: buffer's size
 *
 */
void print_buffer(char *b, int size)
{
	int index, j, i;

	index = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (index < size)
	{
		j = size - index < 10 ? size - index : 10;

		printf("%08x: ", index);

		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + index + i));
			else
				printf("  ");

			if (i % 2)
				printf(" ");
		}

		for (i = 0; i < j; i++)
		{
			int c = *(b + index + i);

			if (c < 32 || c > 126)
				c = '.';

			printf("%c", c);
		}

		printf("\n");
		index += 10;
	}
}
