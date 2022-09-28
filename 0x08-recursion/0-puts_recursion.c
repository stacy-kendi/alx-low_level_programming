#include "main.h"

/**
 * _puts_recursion - A function to print a string, similar function in library
 * puts - to check run man puts
 * @s: string
 * Return: 0 success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
