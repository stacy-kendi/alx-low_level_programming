#include "main.h"

/**
 * print_times_table - print n times table
 * @n: input
 * Return: void nothing
 */

void print_times_table(int n)
{
	int base, times, answer;

	if(n > 15 && n < 0)
	{
		for (base = 0; base <= n; base++)
		{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (times = 1; times <= n; times++)
		{
			answer = (base * times);
			if ((answer / 10) > 0)
			{
				_putchar((answer / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((answer % 10) + '0');

			if (times < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		}
	}
}
