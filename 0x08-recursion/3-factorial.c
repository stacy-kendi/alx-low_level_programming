#include "main.h"

/**
 * factorial - a function to give the factorial of a number
 * factorial equals n * n-1 * n-2
 * @n: int type of positive number
 * Return: factorial of number if n<0 return -1 as error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
		/* factorial of 0 is 1 */
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
