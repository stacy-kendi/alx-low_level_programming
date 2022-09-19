#include "main.h"

/**
 * puts2 - function should print only one character at a time out of several
 * start printing with the first character
 * @str: input
 * Return: print of the characters of a string
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
