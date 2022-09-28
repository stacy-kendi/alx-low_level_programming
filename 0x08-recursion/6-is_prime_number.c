#include "main.h"

/**
 * is_prime_number - function to determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n < 4)
	{
		return (1);
	}
	else
	{
		return (recursivefn(n, 2));
	}
}

/**
 *  _sqrt - return square root of number
 *  @x: number
 *  @i: number incrementer acting as divisor
 *  Return: square root of `x`
 */

int _sqrt(int x, int i)
{
	int square;

	square = i * i;
	if (square >= x)
	{
		return (i);
	}
	else
	{
		return (_sqrt(x, i + 1));
	}
}

/**
 * recursivefn - helper function, to show recursive steps taken
 * @n: number given to original function is_prime_number
 * @d: incrementer divisor
 * Return: 0 if not prime, 1 if prime
 */

int recursivefn(int n, int d)
{
	if (n % d == 0)
	{
		return (0);
	}
	else if (_sqrt(n, 1) < d)
	{
		return (1);
	}
	else
	{
		return (recursivefn(n, d + 1));
	}
}
