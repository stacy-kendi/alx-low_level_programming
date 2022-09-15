#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @digit: the result of the last digit of a number
 * Return: value of the last digit
 */

int print_last_digit(int digit)
{
	int val;

	val = (digit % 10);

	if (val < 0)
	{
		val = (-1 * val);
	}
	_putchar(val + '0');
	return (val);
}
