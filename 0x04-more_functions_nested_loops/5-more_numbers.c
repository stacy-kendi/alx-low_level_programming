#include "main.h"

/**
 * more_numbers - prints ten times the numbers from
 * 0-14
 * Return: 0-14 ten times followed by new line
 */

void more_numbers(void)
{
	int j, answer;

	for (answer = 0; answer < 10; answer++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
