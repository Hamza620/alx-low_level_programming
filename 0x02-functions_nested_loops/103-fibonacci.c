#include <stdio.h>

/**
 * main - Entry function
 *
 * Return: Always 0
 */
int main(void)
{
	int s = 0, a = 1, b = 2, t;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			s = s + b;
		}
		t = a + b;
		a = b;
		b = t
	}
	printf("%d\n", s);
	return (0);
}
