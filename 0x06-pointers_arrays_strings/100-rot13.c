#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @r: char ro encrypt
 * Return: Encrypted text
 */
char *rot13(char *r)
{
	char regl[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encrl[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (r[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (r[i] == regl[j])
			{
				r[i] = encrl[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (r);
}
