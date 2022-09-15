#include <stdio.h>

/**
 * main - print first 98 words
 * Return: 0 as success
 */

int main(void)
{
	long double i, j, sum;
	int k;

	i = 1;
	j = 2;
	k = 0;

	printf("%1.0Lf, %1.0Lf, ", i, j);

	while (k < 96)
	{
		sum = i + j;
		i = j;
		j = sum;

		printf("%1.0Lf", sum);

		if (k + 1 < 96)
			printf(", ");
		k++;
	}

	printf("\n");
	return (0);
}
