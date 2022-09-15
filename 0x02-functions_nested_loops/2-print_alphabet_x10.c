#include "main.h"

/**
 * print_alphabet_x10 - print ten times the alphabet in lowercase
 * Return: a-z ten times
 */

void print_alphabet_x10(void)
{
	char c;
	char alphacount = 0;

	while(alphacount < 10)
	{
		for(c='a'; c<='z'; c++)
		{
			_putchar(c);
		}
		alphacount++;
		_putchar('\n');
	}
}
