#include <stdio.h>

/**
 * main - print 50 fibonacci numbers
 * start with 1 and 2
 * Return: 0
 */

int main(void)
{
	long int i = 1;
	long int j = 2;
	int m = 0;
	long int sum;

	printf("%ld, %ld, ", i, j);

	while (m < 48)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%ld", sum);

		if (m + 1 < 48)
			printf(", ");
		m++;
	}

	printf("\n");
	return (0);
}
