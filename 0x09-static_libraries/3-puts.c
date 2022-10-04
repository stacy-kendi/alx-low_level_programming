#include "main.h"

/**
 * _puts - a function that prints a string follwed by a new line
 * @str: string input
 * Return: a string
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
