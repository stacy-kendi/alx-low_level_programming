#include "main.h"

/**
 * _strcat - a function to concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: Concatenated strings two strings  joined together
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[i] = src[n];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
