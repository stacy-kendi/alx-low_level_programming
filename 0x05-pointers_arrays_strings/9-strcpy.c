#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: where to be copied to
 * @src: where the string is being copied from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	for (; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	
	return (dest);
}
