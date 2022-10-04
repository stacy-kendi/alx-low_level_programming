#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the file followed by a new line
 * If you rename the program, it will print the new name
 * without having to compile it again
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
