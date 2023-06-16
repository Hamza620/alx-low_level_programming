#include <stdio.h>

/**
 * main - Entry function
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a = a + 1)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
