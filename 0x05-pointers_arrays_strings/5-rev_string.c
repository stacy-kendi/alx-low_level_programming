#include "main.h"

/**
 * rev_string - a function that reverses a string
 * fronttoendcount
 * @s: input to reverse
 * Return: a reverserd string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int fronttoendcount = 0;
	int j;

	while (s[fronttoendcount] != '\0')
	{
		fronttoendcount++;
	}

	for (j = 0; j < fronttoendcount; j++)
	{
		fronttoendcount--;
		rev = s[j];
		s[j] = s[fronttoendcount];
		s[fronttoendcount] = rev;
	}
}
