#include <stdio.h>

/**
 * main - Entry function
 * @argc: number of arg
 * @argv: array of arg
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
