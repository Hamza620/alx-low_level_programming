#include <stdio.h>

/**
 * main - Entry function
 *
 * Return: Always 0
 */
int main(void)
{
	char low, up;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (up = 'A'; up <= 'Z'; up++)
		putchar(up);
	putchar('\n');
	return (0);
}
