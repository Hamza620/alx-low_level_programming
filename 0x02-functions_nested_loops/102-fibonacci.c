#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1, b = 2, s, i;
	printf("%d, %d, ", a, b);
	for (i = 3; i <= 50; i++)
	{
		s = a + b;
		printf("%d", s);
		if (i < 50)
		{
			printf(", ");
		}
		a = b;
		b = s;
	}
	printf("\n");
	return (0);
}
