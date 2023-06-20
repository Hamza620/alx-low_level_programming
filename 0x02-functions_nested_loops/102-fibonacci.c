#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1, b = 2, s;
	int i;

	printf("%d, %d", a, b);
	for (i = 3; i <= 50; i++)
	{
		s = a + b;
		printf(", %d", s);
		a = b;
		b = s;
	}
	printf("\n");
	return (0);
}
