#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * print followed by a new line
 * @s: str input
 * fronttoendcount counts from 0 to n front to end, n is to count back n to 0
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int fronttoendcount = 0;
	int j, n;

	for (j = 0; s[j] != '\0'; j++)
	{
		fronttoendcount++;
	}

	for (n = (fronttoendcount - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
