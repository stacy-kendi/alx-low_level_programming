#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as they are stored
 * @arr: array name
 * @n: is the number of elements OF the array to be printed
 * Return: n elements of the array and the array
 */

void print_array(int *arr, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
		printf("%d, ", arr[j]);
	if (j == (n - 1))
		printf("%d", arr[n - 1]);
	printf("\n");
}
