#include <stdio.h>

/**
 * main - Entry function
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
	for (c; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
