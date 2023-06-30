#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string input
 */
void rev_string(char *s)
{
	int len = 0;
	char *tail = s;

	while (*tail != '\0')
	{
		len++;
		tail++;
	}
	tail--;
	while (s < tail)
	{
		char b = *s;
		*s = *tail;
		*tail = b;
		s++;
		tail--;
	}
}
/**
 * infinite_add - function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ov = 0, i = 0, j = 0, d = 0;
	int v1 = 0, v2 = 0, t = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j--;
	i--;
	j--;

	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || ov == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		t = v1 + v2 + ov;
		if (t >= 10 || (t < v1 && t < v2))
			ov = 1;
		else
			ov = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (t % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
