#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * Return: times table
 */

void times_table(void)
{
	int base, times, answer;

	for (base = 0; base <= 9; base++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (times = 1; times <= 9; times++)
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

			if (times < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
