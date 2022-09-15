#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day for 24 hours
 * 10 allows second digit to rotate
 * loop breaks before passing the 24th hour
 * Return: 24 hour clock line by line
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
