#include "main.h"

/**
 * _atoi - Convert a string to integer
 * number in the string can be preceded by an infinite number of characters
 * take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to declare new variables of “type” array
 * @s: char array string
 * Return: convert string to integer
 */

int _atoi(char *s)
{
	int i;
	int j, k;

	j = 0;
	k = -1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			k *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (j < 0)
				j = (j * 10) - (s[i] - '0');
			else
				j = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (k < 0)
		j *= -1;

	return (j);
}
