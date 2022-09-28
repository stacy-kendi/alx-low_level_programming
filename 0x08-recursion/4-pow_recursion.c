#include "main.h"

/**
 * _pow_recursion - return the value of `x` raised to power of `y`
 * @x: number
 * @y: number power
 * Return: x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
		/* if y is less than 0 return -1 as error */
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
