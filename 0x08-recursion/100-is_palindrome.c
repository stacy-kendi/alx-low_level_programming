#include "main.h"

/**
 * is_palindrome - function to check if string is a palindrome
 * palindrome - can be spelled the same way forward and backward
 * @s: char array string
 * Return: 1 if palindrome, 0 if not a palindrome
 */

int is_palindrome(char *s)
{
	int length;

	length = get_length(s) - 1;

	return (revpalindrome(s, --length));
}

/**
 * get_length - gets length of string
 * @s: string
 * Return: return length of string
 */

int get_length(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (1 + get_length(++s));
	}
}

/**
 * revpalindrome - recursively check palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not a palindrome
 */

int revpalindrome(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
		{
			return (1);
		}
		else
		{
			return (revpalindrome(++s, l - 2));
		}
	}
	else
	{
		return (0);
	}
}
