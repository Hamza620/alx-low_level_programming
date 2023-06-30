#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: char input
 * Return: new char
 */
char *cap_string(char *str)
{
	int index = 0;
	int capitalize = 1;

	while (str[index])
	{
		if (capitalize && str[index] >= 'a' && str[index] <= 'z')
		{
		str[index] -= 32;
		}
	if (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' ||
		str[index] == ',' || str[index] == ';' || str[index] == '.' ||
		str[index] == '!' || str[index] == '?' || str[index] == '"' ||
		str[index] == '(' || str[index] == ')' || str[index] == '{' ||
		str[index] == '}')
	{
		capitalize = 1;
	}
	else
	{
		capitalize = 0;
	}

	index++;
	}

	return (str);
}
