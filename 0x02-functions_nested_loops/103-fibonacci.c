#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued
 * terms, followed by a new line
 * Return: 0 as success
 */

int main(void)
{
	long int i = 1;
	long int j = 2;
	long int next;
	long int sum = j;

	while (i + j < 4000000)
	{
		next = i + j;
		i = j;
		j = next;
		if (next % 2 == 0)
			sum += next;
	}

	printf("%ld\n", sum);
	return (0);
}
