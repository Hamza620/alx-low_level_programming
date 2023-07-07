#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 * Return: converted int
 */
int _atoi(char *s)
{
        int g = 1;
        unsigned int r = 0;

        do {
                if (*s == '-')
                        g = g * -1;
                else if (*s >= '0' && *s <= '9')
                        r = (r * 10) + (*s - '0');
                else if (r > 0)
                        break;
        } while (*s++);
        return (r * g);
}

/**
 * main - Entry function
 * @argc: number of arg
 * @argv: array of arg
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int n1, n2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	res = n1 * n2;
	printf("%d\n", res);
	return (0);
}
