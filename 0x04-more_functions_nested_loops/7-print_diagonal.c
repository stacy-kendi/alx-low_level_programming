#include "main.h"

/**
 * print_diagonal - print diagonal line on terminal
 * @n: input number of times \ is to be printed
 * Return: a diagonal line
 */

void print_diagonal(int n)
{
	int diagonal, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (diagonal = 1; diagonal <= n; diagonal++)
		{
			for (i = 1; i < diagonal; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
