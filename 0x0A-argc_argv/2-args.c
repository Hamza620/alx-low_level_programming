#include <stdio.h>

/**
 * main - Entry function
 * @argc: number of arg
 * @argv: array of arg
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
