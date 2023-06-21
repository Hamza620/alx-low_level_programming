#include <stdio.h>

/**
 * main -Entry function
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, s;
	int i;

	printf("%lu, %lu", a, b);
	for (i = 3; i <= 98; i++)
	{
		s = a + b;
		printf(", %lu", s);
		a = b;
		b = s;
	}
	printf("\n");
	return (0);
}
