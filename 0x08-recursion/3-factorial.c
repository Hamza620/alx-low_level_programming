#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: Input number
 * Return: Factorial of input number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (n * factorial(n - 1));
}
