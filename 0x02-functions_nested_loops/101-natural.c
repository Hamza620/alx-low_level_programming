#include <stdio.h>

/**
 * main - Entry function
 *
 * Return: Always 0;
 */
int main(void)
{
	int i, s = 0;
	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			s = s + i;
		}
	}
	printf("\n");
	return (0);
}
