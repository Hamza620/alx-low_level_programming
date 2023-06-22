#include <stdio.h>

/**
 * main - Entry function
 *
 * Return: Always 0
 */
int main(void)
{
	long int fact;
	long int n = 612852475143;
	long int largest = 0;

	for (fact = 2; n > 1; fact++)
	{
		while (n % fact == 0)
		{
			if (fact > largest)
			{
				largest = fact;
			}
			n = n / fact;
		}
	}
	printf("%lu\n", largest);

	return (0);
}
