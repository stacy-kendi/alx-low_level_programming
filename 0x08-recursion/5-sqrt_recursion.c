#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	return (squared(n, 1));
}

/**
 * squared - helper function to solve _sqrt_recursion check for perfect square
 * @c: number to determine if square root
 * @i: incrementer to compare against `c`
 * Return: square root if natural square root, or -1 if none found
 */

int squared(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
	{
		return (i);
	}
	else if (square < c)
	{
		return (squared(c, i + 1));
	}
	else
	{
		return (-1);
	}
}
