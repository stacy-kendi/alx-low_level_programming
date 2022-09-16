#include "main.h"

/**
 * print_number - print an integer
 * @n: int type number
 */

void print_number(int n)
{
	long m; /* to power of 10 */
	int c;
	long num; /* convert int to long */

	num = n;
	/* negatives */
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	/* count up */
	m = 1;
	c = 1;
	while (c)
	{
		if (num / (m * 10) > 0)
		{
			m *= 10;
		}
		else
		{
			c = 0;
		}
	}

	/* count down */
	while (num >= 0)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / m % 10) + '0');
			m /= 10;
		}
	}
}
