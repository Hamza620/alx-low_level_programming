#include "main.h"

/**
 * _sqrt_helper - recursive helper function
 * @a: Input number
 * @c: current value to check
 * Return: square root
 */
int _sqrt_helper(int a, int c)
{
	if (c * c > a)
		return (-1);
	if (c * c == a)
		return (c);
	return (_sqrt_helper(a, c + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: Iput number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
