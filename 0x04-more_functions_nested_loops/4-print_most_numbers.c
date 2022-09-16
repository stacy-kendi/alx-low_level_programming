#include "main.h"

/**
 * print_most_numbers - print 0-9
 * exclude 2 and 4
 * Return: 0-9 without 2 and 4
 */

void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		else
		{
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
