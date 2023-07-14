#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - Multiplies two numbers
 * @n1: First number
 * @n2: Second number
 * Return: result of multiplication
 */
int multiply(int n1, int n2)
{
    int res;

    res = n1 * n2;
    return (res);
}

/**
 * is_valid_number - Checks if a string is a valid number
 * @s: String to check
 * Return: 1 if valid, 0 otherwise
 */
int is_valid_number(char *s)
{
    int v = 1;

    if (s == NULL || *s == '\0')
    {
        v = 0;
    }
    else
    {
        while (*s != '\0')
        {
            if (!isdigit(*s))
            {
                v = 0;
                break;
            }
            s++;
        }
    }

    return (v);
}

/**
 * main - Entry function
 * @argc: Number arguments
 * @argv: Array arguments
 * Return: Always 0, 98 on error
 */
int main(int argc, char *argv[])
{
    int n1, n2;
    int res;
    char *n1_str, *n2_str;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }
    n1_str = argv[1];
    n2_str = argv[2];
    if (!is_valid_number(n1_str) || !is_valid_number(n2_str))
    {
        printf("Error\n");
        return (98);
    }
    n1 = atoi(n1_str);
    n2 = atoi(n2_str);
    res = multiply(n1, n2);
    printf("%d\n", res);
    return (0);
}
