#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: Input number
 * Retrun: Nothing
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != n)
			{
				printf(", ");
			}
			printf("%d", a);
		}
	}
	else if (n >= 98)
	{
		for (a = n; a >= 98; a--)
		{
			if (a != n)
			{
				printf(", ");
			}
			printf("%d", a);
		}
	}
	printf("\n");
}
