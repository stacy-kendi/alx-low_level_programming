#include "main.h"

/**
 * print_line - draws a straightline on terminal
 * Where n is the number of times the
 * character _ should be printed
 * @n: input number of times to print '_'
 * Return: a straight line
 */

void print_line(int n)
{
	int straightline;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (straightline = 1; straightline <= n; straightline++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}	
