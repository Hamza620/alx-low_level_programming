#include "main.h"

/**
 * prime_helper - check if it a prime number
 * @a: Input value
 * @b: current value to check
 * Return: 1 if prime otherwise 0
 */
int prime_helper(int a, int b)
{
	if (b == 1)
		return (1);
	if (a % b == 0 && b > 0)
		return (0);
	return (prime_helper(a, b - 1));
}

/**
 * is_prime_number - function that check if it a prime number
 * @n: Input number
 * Return: 1 if it a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, n - 1));
}
