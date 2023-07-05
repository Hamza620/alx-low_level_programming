#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: Input string
 * Return: string's length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_helper - check if character is a palindrome
 * @a: Input string
 * @b: current checking value
 * @lent: string's length
 * Return: 1 if palindrome, 0 if not
 */
int palindrome_helper(char *a, int b, int lent)
{
	if (*(a + b) != *(a + lent - 1))
		return (0);
	if (b >= lent)
		return (1);
	return (palindrome_helper(a, b + 1, lent - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: Input string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome_helper(s, 0, _strlen_recursion(s)));
}
