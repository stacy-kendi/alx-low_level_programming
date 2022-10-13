#include "function_pointers.h"

/**
 * print_name - a function to print a name from function pointer
 * @name: char string
 * @f: function pointer that takes a string argument
 * Return: void with a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)

	f(name);
}
