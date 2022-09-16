#include "main.h"

/**
 * print_triangle - print a triangle on terminal
 * @size: size of the triangle
 * Return: triangle made up of #
 */

void print_triangle(int size)
{
	int i, j, triangle;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j <= (size - 1); j++)
		{
			for (i = 0; i < (size - 1) - j; i++)
			{
				_putchar(' ');
			}
			for (triangle = 0; triangle <= j; triangle++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
