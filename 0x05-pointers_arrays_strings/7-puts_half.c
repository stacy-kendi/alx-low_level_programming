#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print
 * the last n characters of the string
 * where n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of the string input
 */

void puts_half(char *str)
{
	int j, n, length;

	length = 0;

	for (j = 0; str[j] != '\0'; j++)
		length++;

	n = (length / 2);

	if ((length % 2) == 1)
		n = ((length + 1) / 2);

	for (j = n; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
